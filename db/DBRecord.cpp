#ifndef RECORD_CPP
#define RECORD_CPP
#define RECORD_IS_EMPTY "{ Record is empty. }"

#include "dataTypes/DataType.h"

template <class T>
class DBRecord {
private:
	typedef struct SLink {
		T data;
		SLink* next;
	} *Link;

	Link begin;
	int size;

	Link getLink(int index) {
		if (index < 0) return nullptr;
		Link current = begin;
		while (current != nullptr && index > 0) {
			current = current->next;
			index--;
		}
		return current;
	}
public:

	DBRecord() {
		begin = nullptr;
		size = 0;
	}

	void add() {
		if (begin == nullptr) {
			begin = (Link)malloc(sizeof(struct SLink));
			begin->data = nullptr;
			begin->next = nullptr;
		}
		else {
			Link current = getLink(size - 1);
			current->next = (Link)malloc(sizeof(struct SLink));
			current = current->next;
			current->data = nullptr;
			current->next = nullptr;
		}
		size++;
	}

	void add(T data) {
		if (begin == nullptr) {
			begin = (Link)malloc(sizeof(struct SLink));
			begin->data = (T)data->copy();
			begin->next = nullptr;
		}
		else {
			Link current = getLink(size - 1);
			current->next = (Link)malloc(sizeof(struct SLink));
			current = current->next;
			current->data = (T)data->copy();
			current->next = nullptr;
		}
		size++;
	}
	
	int find(T data, int start) {
		Link current = getLink(start);

		while (current != nullptr) {
			if (current->data->equals(data)) return start;
			start++;
			current = current->next;
		}
		return -1;
	}

	bool remove(int index)
	{
		Link removable = getLink(index);
		Link prev = getLink(index - 1);
		if (removable == nullptr) return false;
		if (prev == nullptr)
		{
			begin = removable->next;
		}
		else {
			prev->next = removable->next;
		}
		size--;
		return true;
	}

	bool swap(int firstIndex, int secondIndex)
	{
		if (firstIndex == secondIndex) return true;
		if (firstIndex > secondIndex)
		{
			int temp = firstIndex;
			firstIndex = secondIndex;
			secondIndex = temp;
		}

		Link first = getLink(firstIndex);
		Link second = getLink(secondIndex);

		Link firstPrev = getLink(firstIndex - 1);
		Link secondPrev = getLink(secondIndex - 1);

		if (first == nullptr || second == nullptr) return false;

		if (firstPrev == nullptr)
		{
			begin = second;
		}
		else {
			firstPrev->next = second;
		}

		if (first->next == second)
		{
			first->next = second->next;
			second->next = first;
		}
		else {
			Link temp = first->next;
			first->next = second->next;
			second->next = temp;
		}
		if (secondPrev == first)
		{
			second->next = first;
		}
		else {
			secondPrev->next = first;
		}
		return true;
	}

	bool moveBefore(int movableIndex, int beforeIndex)
	{
		if (beforeIndex - 1 == movableIndex || beforeIndex == movableIndex) return true;
		if (beforeIndex > size) return false;
		Link movable = getLink(movableIndex);
		Link prevMovable = getLink(movableIndex - 1);
		Link beforePrev = getLink(beforeIndex - 1);
		if (movable == nullptr) return false;

		if (prevMovable == nullptr)
		{
			begin = movable->next;
		}
		else {
			prevMovable->next = movable->next;
		}

		if(beforeIndex == 0) {
			if (begin->next == movable) {
				begin->next = movable->next;
			}
			movable->next = begin;
			begin = movable;
		}
		else {
			if (beforePrev == nullptr) return false;

			movable->next = beforePrev->next;
			beforePrev->next = movable;
		}

		return true;
	}

	T get(int index) {
		Link current = getLink(index);
		if (current == nullptr) return nullptr;
		return current->data == nullptr ? nullptr : (T)current->data->copy();
	}

	bool set(int index, T data) {
		Link current = getLink(index);
		if (current == nullptr) return false;
		current->data = data->copy();
		return true;
	}

	int indexOf(T data)
	{
		Link current = begin;
		int i = 0;
		while (current != nullptr)
		{
			if (current->data != nullptr && current->data->equals(data)) return i;
			current = current->next;
			i++;
		}
		return -1;
	}

	int getSize() {
		return size;
	}

	int getType(int index) {
		return get(index)->getType();
	}

	DBString toString() {
		if (begin == nullptr) {
			return DBString(RECORD_IS_EMPTY).addBefore("{ ") + " }";
		}
		else {
			DBString ans("{ ");
			Link current = begin;
			while (current->next != nullptr) {
				ans = ans + (current->data == nullptr ? "" : current->data->toString()) + "; ";
				current = current->next;
			}
			ans = ans + (current->data == nullptr ? "" : current->data->toString()) + " }";
			return ans;
		}
	}

	DBString toString(const char* separator, const char* beginner, const char* finalist) {
		if (begin == nullptr) {
			return DBString(RECORD_IS_EMPTY).addBefore(beginner) + finalist;
		}
		else {
			DBString ans(beginner);
			Link current = begin;
			while (current->next != nullptr) {
				ans = ans + (current->data == nullptr ? "" : current->data->toString()) + separator;
				current = current->next;
			}
			ans = ans + (current->data == nullptr ? "" : current->data->toString()) + finalist;
			return ans;
		}
	}

	DBRecord<DBType*>* copy()
	{
		auto* record = new DBRecord<DBType*>();
		Link current = begin;
		for (int i = 0; i < size; i++) {
			record->add(current->data);
			current = current->next;
		}
		return record;
	}


	DBString toStringForFile() {
		if (begin == nullptr) {
			return { "" };
		}
		else {
			DBString ans("");
			
			Link current = begin;
			while (current->next != nullptr) {
				ans = ans + current->data->toString() + "\n";
				current = current->next;
			}
			
			return ans + current->data->toString();
		}
	}
};
#endif