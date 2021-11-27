#ifndef DATABASE_CPP
#define DATABASE_CPP
#define DATABASE_IS_EMPTY "{ Database is empty. }"

#include "DBRecord.cpp"
#include "DBFilter.cpp"

class CellLocation {
public:
	int row, col;

	CellLocation(int row, int col) {
		this->row = row;
		this->col = col;
	}
};

class DataBase {
private:
	typedef DBRecord<DBType*>* R;
	typedef struct SLink {
		R data;
		SLink* next, * prev;
	} *Link;

	Link begin, end;
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

	DBRecord<DBString*> titles;
	DBRecord<DBNumber*> types;
public:

	DataBase() : types(), titles() {
		begin = end = nullptr;
		size = 0;
	}

	bool isCorrectRecord(R record) {
		for (int i = 0; i < types.getSize(); i++) {
			if (record->getType(i) != (int)types.get(i)->get()) return false;
		}
		return true;
	}

	static DBType* newStandardElement(DBType::types type) {
		switch (type) {
		case DBType::tDate:
			return new DBDate();
		case DBType::tDay:
			return new DBDay();
		case DBType::tNumber:
			return new DBNumber();
		case DBType::tText:
			return new DBText();
		case DBType::tTime:
			return new DBTime();
		default:
			return nullptr;
		}
	}

	static DBType* newElementFromString(DBType::types type, DBString example) {
		switch (type) {
		case DBType::tDate:
			return new DBDate(example);
		case DBType::tDay:
			return new DBDay(example);
		case DBType::tNumber:
			return new DBNumber(example);
		case DBType::tText:
			return new DBText(example);
		case DBType::tTime:
			return new DBTime(example);
		default:
			return nullptr;
		}
	}

	bool filter(bool mode, DBRecord<DBString*>* rules) {
		DBFilter filter(mode, rules, &types);

		DBEnum* rec = this->getEnumerator();

		int i = 0;
		while (rec->hasNext()) {
			if (!filter.matches(rec->next())) {
				removeRecord(i);
				i--;
			}
			i++;
		}
		return true;
	}

	bool addField(int type, DBString* title) {
		if (type < DBType::tDate || type > DBType::tTime) return false;
		if (titles.indexOf(title) > -1) return false;

		titles.add(title);
		types.add(new DBNumber(type));
		for (int i = 0; i < size; i++) {
			getLink(i)->data->add(newStandardElement(DBType::types(type)));
		}
		return true;
	}

	bool addRecord() {
		DBRecord<DBType*>* record = new DBRecord<DBType*>();
		for (int i = 0; i < getFieldCount(); i++)
		{
			record->add(newStandardElement(DBType::types(types.get(i)->get())));
		}
		return addRecord(record);
	}

	bool addRecord(R data) {
		if (!isCorrectRecord(data)) return false;
		if (begin == nullptr) {
			begin = end = (Link)malloc(sizeof(struct SLink));
			begin->data = data->copy();
			begin->next = nullptr;
			begin->prev = nullptr;
		}
		else {
			end->next = (Link)malloc(sizeof(struct SLink));
			end->next->prev = end;
			end = end->next;
			end->data = data->copy();
			end->next = nullptr;
		}
		size++;
		return true;
	}

	bool removeField(int index)
	{
		if (!types.remove(index)) return false;
		if (!titles.remove(index)) return false;

		for (int i = 0; i < size; i++)
		{
			if (!getLink(i)->data->remove(index)) return false;
		}
		return true;
	}

	bool removeRecord(int index) {
		Link removable = getLink(index);
		if (removable == nullptr) return false;
		if (removable->prev == nullptr) {
			begin = removable->next;
		}
		else {
			removable->prev->next = removable->next;
		}
		if (removable->next == nullptr) {
			end = removable->prev;
		}
		else {
			removable->next->prev = removable->prev;
		}
		size--;
		return true;
	}

	bool swapFields(int firstIndex, int secondIndex)
	{
		if (!types.swap(firstIndex, secondIndex)) return false;
		if (!titles.swap(firstIndex, secondIndex)) return false;

		for (int i = 0; i < size; i++)
		{
			if (!getLink(i)->data->swap(firstIndex, secondIndex)) return false;
		}
		return true;
	}

	bool swapRecords(int firstIndex, int secondIndex) {
		if (firstIndex == secondIndex) return true;
		if (firstIndex > secondIndex) {
			int temp = firstIndex;
			firstIndex = secondIndex;
			secondIndex = temp;
		}

		Link first = getLink(firstIndex);
		Link second = getLink(secondIndex);

		if (first == nullptr || second == nullptr) return false;

		if (first->prev == nullptr) {
			begin = second;
		}
		else {
			first->prev->next = second;
		}

		if (second->next == nullptr) {
			end = first;
		}
		else {
			second->next->prev = first;
		}

		if (first->next == second) {
			first->next = second->next;
			second->next = first;
		}
		else {
			first->next->prev = second;
			Link temp = first->next;
			first->next = second->next;
			second->next = temp;
		}

		if (second->prev == first) {
			second->prev = first->prev;
			first->prev = second;
		}
		else {
			second->prev->next = first;
			Link temp = second->prev;
			second->prev = first->prev;
			first->prev = temp;
		}
		return true;
	}

	bool moveFieldBefore(int movableIndex, int beforeIndex)
	{
		if (!types.moveBefore(movableIndex, beforeIndex)) return false;
		if (!titles.moveBefore(movableIndex, beforeIndex)) return false;

		for (int i = 0; i < size; i++)
		{
			if (!getLink(i)->data->moveBefore(movableIndex, beforeIndex)) return false;
		}
		return true;
	}

	bool moveRecordBefore(Link movable, Link before) {
		if (movable == nullptr) return false;

		if (movable->prev == nullptr)
		{
			begin = movable->next;
		}
		else {
			movable->prev->next = movable->next;
		}

		if (movable->next == nullptr)
		{
			end = movable->prev;
		}
		else {
			movable->next->prev = movable->prev;
		}

		if (before == nullptr)
		{
			movable->prev = end;
			end->next = movable;
			end = movable;
		}
		else {
			if (before == nullptr) return false;

			movable->prev = before->prev;
			before->prev = movable;
			movable->next = before;

			if (movable->prev == nullptr)
			{
				begin = movable;
			}
			else {
				movable->prev->next = movable;
			}
		}

		return true;
	}

	bool moveRecordBefore(int movableIndex, int beforeIndex)
	{
		if (beforeIndex - 1 == movableIndex || beforeIndex == movableIndex) return true;
		Link movable = getLink(movableIndex);
		Link before = getLink(beforeIndex);

		if (movable == nullptr) return false;

		if (movable->prev == nullptr)
		{
			begin = movable->next;
		}
		else {
			movable->prev->next = movable->next;
		}

		if (movable->next == nullptr)
		{
			end = movable->prev;
		}
		else {
			movable->next->prev = movable->prev;
		}

		if (beforeIndex == size)
		{
			movable->prev = end;
			end->next = movable;
			end = movable;
		}
		else {
			if (before == nullptr) return false;

			movable->prev = before->prev;
			before->prev = movable;
			movable->next = before;

			if (movable->prev == nullptr)
			{
				begin = movable;
			}
			else {
				movable->prev->next = movable;
			}
		}

		return true;
	}

	bool copyRecord(int index) {
		return addRecord(get(index))
			&& moveRecordBefore(size - 1, index);
	}

	bool ascendingSort(int field) {
		if (field < 0 || field > size - 1) return false;
		if (size < 2) return true;

		Link minStart = begin;
		bool isChanged;
		do {
			Link current = minStart;
			DBType* min = current->data->get(field);
			Link minLink = current;

			isChanged = false;
			current = current->next;
			while (current != nullptr)
			{
				DBType* data = current->data->get(field);
				if (data->lesserThan(min)) {
					min = current->data->get(field);
					minLink = current;
					isChanged = true;
				}
				current = current->next;
			}
			if (isChanged) {
				moveRecordBefore(minLink, minStart);
			}
		} while (minStart != nullptr && isChanged);
		return true;
	}

	bool descendingSort(int field) {
		if (field < 0 || field > size - 1) return false;
		if (size < 2) return true;

		Link minStart = begin;
		bool isChanged;
		do {
			Link current = minStart;
			DBType* min = current->data->get(field);
			Link minLink = current;

			isChanged = false;
			current = current->next;
			while (current != nullptr)
			{
				DBType* data = current->data->get(field);
				if (data->biggerThan(min)) {
					min = current->data->get(field);
					minLink = current;
					isChanged = true;
				}
				current = current->next;
			}
			if (isChanged) {
				moveRecordBefore(minLink, minStart);
			}
		} while (minStart != nullptr && isChanged);
		return true;
	}

	R get(int index) {
		Link current = getLink(index);
		if (current == nullptr) return nullptr;
		return current->data->copy();
	}

	DBString getTitle(int index) {
		return *titles.get(index);
	}

	bool isCorrectInitializer(DBString init, int index) {
		return newElementFromString(DBType::types(getType(index)), init)->isCorrect();
	}

	int indexOfTitle(DBString* title)
	{
		return titles.indexOf(title);
	}

	int getFieldCount()
	{
		return types.getSize();
	}

	bool setTitle(int titleIndex, DBString* title)
	{
		return titles.set(titleIndex, title);
	}

	bool set(int recIndex, int index, DBType* data) {
		if (index < 0 || index > types.getSize() - 1) return false;
		if ((int)types.get(index)->get() != data->getType()) return false;
		Link current = getLink(recIndex);
		if (current == nullptr) return false;
		current->data->set(index, data);
		return true;
	}

	int getSize() {
		return size;
	}

	int getType(int index) {
		return (int)types.get(index)->get();
	}

	CellLocation findCell(DBString findable, int startCol, int startRow) {
		Link current = getLink(startRow);
		if (current == nullptr) return CellLocation(-1, -1);

		while (current != nullptr) {
			while (startCol < getFieldCount()) {
				if (current->data->get(startCol)->equals(newElementFromString(DBType::types(getType(startCol)), findable))) return CellLocation(startRow, startCol);
				startCol++;
			}
			current = current->next;
			startCol = 0;
			startRow++;
		}

		return CellLocation(-1, -1);
	}

	DataBase* copy()
	{
		DataBase* db = new DataBase();
		for (int i = 0; i < getFieldCount(); i++)
		{
			db->addField((int)types.get(i)->get(), titles.get(i));
		}

		for (int i = 0; i < size; i++)
		{
			db->addRecord(get(i));
		}
		return db;
	}

	DBString toString() {
		if (begin == nullptr && types.getSize() == 0) {
			return { DATABASE_IS_EMPTY };
		}
		else {

			DBString ans("");
			ans = ans + "Titles" + ": ";
			for (int i = 0; i < types.getSize(); i++) {
				ans = ans + *titles.get(i) + ";";
			}
			ans = ans + "\nTypes" + "; ";
			for (int i = 0; i < types.getSize(); i++) {
				ans = ans + DBType::typeToString((int)types.get(i)->get()) + "; ";
			}
			ans = ans + "\n";
			Link current = begin;
			for (int i = 0; i < size; i++)
			{
				ans = ans + DBString(i) + ": " + current->data->toString() + "\n";
				current = current->next;
			}
			return ans;
		}
	}

	DBString toString(const char* indexSeparator, const char* separator, const char* beginner, const char* finalist) {
		if (begin == nullptr && types.getSize() == 0) {
			return { DATABASE_IS_EMPTY };
		}
		else {
			DBString ans("");
			ans = ans + "Titles" + indexSeparator;
			for (int i = 0; i < types.getSize(); i++) {
				ans = ans + *titles.get(i) + separator;
			}
			ans = ans + "\nTypes" + indexSeparator;
			for (int i = 0; i < types.getSize(); i++) {
				ans = ans + DBType::typeToString((int)types.get(i)->get()) + separator;
			}
			ans = ans + "\n";
			Link current = begin;
			for (int i = 0; i < size; i++)
			{
				ans = ans + DBString(i) + indexSeparator + current->data->toString(separator, beginner, finalist) + "\n";
				current = current->next;
			}
			return ans;
		}
	}

	DBString toStringForFile() {
		if (begin == nullptr && types.getSize() == 0) {
			return { "" };
		}
		else {
			DBString ans("");

			for (int i = 0; i < titles.getSize(); i++) {
				ans = ans + getTitle(i) + "\n" + (DBString(getType(i))) + "\n";
			}
			ans = ans + "\n" + DBString(getSize()) + "\n";

			Link current = begin;
			while (current != nullptr) {
				ans = ans + current->data->toStringForFile() + "\n\n";
				current = current->next;
			}

			return ans;
		}
	}

	class DBEnum {
	private:
		Link current;
	public:
		DBEnum(Link begin)
		{
			current = begin;
		}

		bool hasNext()
		{
			return current != nullptr;
		}

		R next()
		{
			if (hasNext()) {
				R copy = current->data->copy();
				current = current->next;
				return copy;
			}
			return nullptr;
		}
	};

	DBEnum* getEnumerator() {
		return new DBEnum(begin);
	}
};

#endif