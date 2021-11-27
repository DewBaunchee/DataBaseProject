#ifndef DBADAPTER_CPP
#define DBADAPTER_CPP

#include <Windows.h>
#include "DataBase.cpp"

using namespace System::Windows::Forms;

ref class DBAdapter {
private:
	DataBase* DB;
	DataGridView^ GW;
	bool wasSavedInForm;
	bool wasFiltered;
	bool wasSorted;

	DataBase* recoveryDB;
	DataBase* notSortedDB;
public:
	DBAdapter()
	{
		DB = nullptr;
		GW = nullptr;
		recoveryDB = nullptr;
	}

	DBAdapter(DataBase* db, DataGridView^ gw)
	{
		DB = db;
		GW = gw;
		recoveryDB = nullptr;
		wasSavedInForm = true;
		wasFiltered = false;
		wasSorted = false;
	}

	// Проверка на сохранение
	bool wasSaved()
	{
		return wasSavedInForm;
	}

	// Сохранение базы данных перед операцией
	void backup()
	{
		*DB = *recoveryDB;
		recoveryDB = nullptr;
		wasSavedInForm = true;
	}

	void saveDB()
	{
		recoveryDB = DB->copy();
		wasSavedInForm = false;
	}

	void flushDB()
	{
		delete recoveryDB;
	}

	// Сортировка
	bool sort(DBString *title, bool isAscending) {
		saveDB();

		if (isAscending) {
			if (!DB->ascendingSort(DB->indexOfTitle(title))) return false;
		} else {
			if (!DB->descendingSort(DB->indexOfTitle(title))) return false;
		}
		wasSorted = true;
		reload();
		return true;
	}

	void unsort() {
		if (wasSorted) {
			backup();
			reload();
			wasSorted = false;
		}
	}

	// Выборка/фильтрация
	bool filter(bool mode, DBRecord<DBString*>* rules) {
		saveDB();
		if (DB->filter(mode, rules)) {
			DataGridViewRow^ conditions = (DataGridViewRow^) GW->Rows[GW->RowCount - 1]->Clone();
			reload();
			GW->Rows->Add(conditions);
			wasFiltered = true;
			return true;
		}
		else {
			backup();
			wasFiltered = false;
			return false;
		}
	}

	void unfilter() {
		if (wasFiltered)
		{
			backup();
			reload();
			wasFiltered = false;
		}
	}

	// Сохранение базы данных в файл
	bool save(System::String^ fileName) {
		try
		{
			System::IO::StreamWriter^ stream = gcnew System::IO::StreamWriter(fileName);
			stream->WriteLine(DB->toStringForFile().toSysString());
			stream->Close();
		}
		catch (System::Exception^ e)
		{
			return false;
		}
		wasSavedInForm = true;
		return true;
	}

	// Загрузка базы данных из файла
	bool load(System::String^ fileName) {
		try
		{
			System::IO::StreamReader^ stream = gcnew System::IO::StreamReader(fileName);
			System::String^ line;

			while ((line = stream->ReadLine())->Length > 0) {
				addField(DBType::types(System::Convert::ToInt32(stream->ReadLine())), new DBString(line));
			}

			int size = System::Convert::ToInt32(stream->ReadLine());
			for (int i = 0; i < size; i++) {
				auto rec = new DBRecord<DBType*>();
				int typeIndex = 0;
				while ((line = stream->ReadLine())->Length > 0) {
					rec->add(DB->newElementFromString(DBType::types(DB->getType(typeIndex)), DBString(line)));
					typeIndex++;
				}
				addRecord(rec);
			}
			stream->Close();
		}
		catch (System::Exception^ e)
		{
			return false;
		}
		wasSavedInForm = true;
		return true;
	}

	// Скопировать запись
	bool copyRecord(int index) {
		saveDB();
		if (DB->copyRecord(index))
		{
			GW->Rows->Insert(index, 1);
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				GW->Rows[index]->Cells[2 + i]->Value = GW->Rows[index + 1]->Cells[2 + i]->Value;
			}
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Перезагрузка таблицы
	bool reload()
	{
		GW->Rows->Clear();
		GW->Columns->Clear();

		for (int i = 0; i < DB->getFieldCount(); i++) {
			GW->Columns->Add(DB->getTitle(i).toSysString(), DB->getTitle(i).toSysString());
			GW->Columns[GW->ColumnCount - 1]->SortMode = DataGridViewColumnSortMode::NotSortable;
		}

		DataBase::DBEnum* records = DB->getEnumerator();
		int j = 0;
		while (records->hasNext())
		{
			GW->Rows->Add();
			if (j == 2)
				j = 2;
			auto record = records->next();
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				GW[i, j]->Value = record->get(i)->toString().toSysString();
			}
			j++;
		}
		return true;
	}

	// Поиск
	CellLocation find(DBString findable, int col, int row) {
		return DB->findCell(findable, col, row);
	}

	// Добавление поля
	bool addField(DBType::types type, DBString* title)
	{
		saveDB();
		if (DB->addField(type, title))
		{
			GW->Columns->Add(title->toSysString(), title->toSysString());
			GW->Columns[GW->ColumnCount - 1]->SortMode = DataGridViewColumnSortMode::NotSortable;
			int size = DB->getSize();
			int lastCol = DB->getFieldCount() - 1;
			for (int i = 0; i < size; i++) {
				GW->Rows[i]->Cells[lastCol]->Value = DB->get(i)->get(lastCol)->toString().toSysString();
			}
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Удаление поля
	bool removeField(int index)
	{
		saveDB();
		if (DB->removeField(index))
		{
			GW->Columns->RemoveAt(index);
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	bool removeField(DBString* title)
	{
		saveDB();
		int index = DB->indexOfTitle(title);
		if (DB->removeField(index))
		{
			GW->Columns->RemoveAt(index);
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Добавление записи
	bool addRecord() {
		saveDB();
		if (DB->addRecord())
		{
			GW->Rows->Add();
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	bool addRecord(DBRecord<DBType*>* record) {
		saveDB();
		if (DB->addRecord(record))
		{
			GW->Rows->Add();
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				GW[i, GW->RowCount - 1]->Value = record->get(i)->toString().toSysString();
			}
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	bool addRecord(DBRecord<DBString*>* strRecord) {
		saveDB();
		auto record = new DBRecord<DBType*>();
		for (int col = 0; col < DB->getFieldCount(); col++) {
			record->add(DataBase::newElementFromString(DBType::types(DB->getType(col)), *(strRecord->get(col))));
		}

		if (DB->addRecord(record))
		{
			GW->Rows->Add();
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				GW[i, GW->RowCount - 1]->Value = record->get(i)->toString().toSysString();
			}
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Удаление записи
	bool removeRecord(int index)
	{
		saveDB();
		if (DB->removeRecord(index))
		{
			GW->Rows->RemoveAt(index);
			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Перестановка полей
	bool swapFields(int firstIndex, int secondIndex)
	{
		saveDB();
		if (DB->swapFields(firstIndex, secondIndex))
		{
			if (firstIndex != secondIndex) {
				if (firstIndex > secondIndex)
				{
					int temp = firstIndex;
					firstIndex = secondIndex;
					secondIndex = temp;
				}

				DataGridViewColumn^ firstCol = (DataGridViewColumn^)GW->Columns[firstIndex]->Clone();
				DataGridViewColumn^ secondCol = (DataGridViewColumn^)GW->Columns[secondIndex]->Clone();

				GW->Columns->Insert(secondIndex, firstCol);
				GW->Columns->Insert(firstIndex, secondCol);

				firstIndex += 1;
				secondIndex += 2;

				for (int i = 0; i < GW->RowCount; i++) {
					GW->Rows[i]->Cells[firstIndex - 1]->Value = GW->Rows[i]->Cells[secondIndex]->Value;
					GW->Rows[i]->Cells[secondIndex - 1]->Value = GW->Rows[i]->Cells[firstIndex]->Value;
				}

				GW->Columns->RemoveAt(secondIndex);
				GW->Columns->RemoveAt(firstIndex);
			}

			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	bool swapFields(DBString* first, DBString* second)
	{
		saveDB();
		int firstIndex = DB->indexOfTitle(first);
		int secondIndex = DB->indexOfTitle(second);
		if (DB->swapFields(firstIndex, secondIndex))
		{
			if (firstIndex != secondIndex) {
				if (firstIndex > secondIndex)
				{
					int temp = firstIndex;
					firstIndex = secondIndex;
					secondIndex = temp;
				}

				DataGridViewColumn^ firstCol = (DataGridViewColumn^)GW->Columns[firstIndex]->Clone();
				DataGridViewColumn^ secondCol = (DataGridViewColumn^)GW->Columns[secondIndex]->Clone();

				GW->Columns->Insert(secondIndex, firstCol);
				GW->Columns->Insert(firstIndex, secondCol);

				firstIndex += 1;
				secondIndex += 2;

				for (int i = 0; i < GW->RowCount; i++) {
					GW->Rows[i]->Cells[firstIndex - 1]->Value = GW->Rows[i]->Cells[secondIndex]->Value;
					GW->Rows[i]->Cells[secondIndex - 1]->Value = GW->Rows[i]->Cells[firstIndex]->Value;
				}

				GW->Columns->RemoveAt(secondIndex);
				GW->Columns->RemoveAt(firstIndex);
			}

			flushDB();
			return true;
		}
		else
		{
			backup();
			return false;
		}
	}

	// Перестановка записей
	bool swapRecords(int firstIndex, int secondIndex) {
		saveDB();
		if (DB->swapRecords(firstIndex, secondIndex))
		{
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				System::Object^ temp = GW->Rows[firstIndex]->Cells[i]->Value;
				GW->Rows[firstIndex]->Cells[i]->Value = GW->Rows[secondIndex]->Cells[i]->Value;
				GW->Rows[secondIndex]->Cells[i]->Value = temp;
			}
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	// Вставить поле перед
	bool moveFieldBefore(int movableIndex, int beforeIndex)
	{
		saveDB();
		if (DB->moveFieldBefore(movableIndex, beforeIndex))
		{
			if (movableIndex != beforeIndex && movableIndex + 1 != beforeIndex) {
				DataGridViewColumn^ movableCol = (DataGridViewColumn^)GW->Columns[movableIndex]->Clone();
				if (beforeIndex == GW->ColumnCount) {
					GW->Columns->Add(movableCol);
				}
				else {
					GW->Columns->Insert(beforeIndex, movableCol);
				}

				for (int i = 0; i < GW->RowCount; i++) {
					GW->Rows[i]->Cells[beforeIndex]->Value = GW->Rows[i]->Cells[movableIndex + (beforeIndex < movableIndex)]->Value;
				}

				GW->Columns->RemoveAt(movableIndex + (beforeIndex < movableIndex));
			}
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	bool moveFieldInDB(int movableIndex, int beforeIndex)
	{
		saveDB();
		if (DB->moveFieldBefore(movableIndex, beforeIndex))
		{
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	bool moveFieldToEnd(DBString* movable)
	{
		saveDB();
		int movableIndex = DB->indexOfTitle(movable);
		int beforeIndex = DB->getFieldCount();
		if (DB->moveFieldBefore(movableIndex, beforeIndex))
		{
			if (movableIndex != beforeIndex && movableIndex + 1 != beforeIndex) {
				DataGridViewColumn^ movableCol = (DataGridViewColumn^)GW->Columns[movableIndex]->Clone();
				if (beforeIndex == GW->ColumnCount) {
					GW->Columns->Add(movableCol);
				}
				else {
					GW->Columns->Insert(beforeIndex, movableCol);
				}

				for (int i = 0; i < GW->RowCount; i++) {
					GW->Rows[i]->Cells[beforeIndex]->Value = GW->Rows[i]->Cells[movableIndex + (beforeIndex < movableIndex)]->Value;
				}

				GW->Columns->RemoveAt(movableIndex + (beforeIndex < movableIndex));
			}
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	bool moveFieldBefore(DBString* movable, DBString* before)
	{
		saveDB();
		int movableIndex = DB->indexOfTitle(movable);
		int beforeIndex = DB->indexOfTitle(before);
		if (DB->moveFieldBefore(movableIndex, beforeIndex))
		{
			if (movableIndex != beforeIndex && movableIndex + 1 != beforeIndex) {
				DataGridViewColumn^ movableCol = (DataGridViewColumn^)GW->Columns[movableIndex]->Clone();
				if (beforeIndex == GW->ColumnCount) {
					GW->Columns->Add(movableCol);
				}
				else {
					GW->Columns->Insert(beforeIndex, movableCol);
				}

				for (int i = 0; i < GW->RowCount; i++) {
					GW->Rows[i]->Cells[beforeIndex]->Value = GW->Rows[i]->Cells[movableIndex + (beforeIndex < movableIndex)]->Value;
				}

				GW->Columns->RemoveAt(movableIndex + (beforeIndex < movableIndex));
			}
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	// Вставить запись перед
	bool moveRecordBefore(int movableIndex, int beforeIndex)
	{
		saveDB();
		if (DB->moveRecordBefore(movableIndex, beforeIndex))
		{
			GW->Rows->Insert(beforeIndex, 1);
			int isMovableOffset = beforeIndex < movableIndex;
			for (int i = 0; i < DB->getFieldCount(); i++)
			{
				GW->Rows[beforeIndex]->Cells[i]->Value = GW->Rows[movableIndex + isMovableOffset]->Cells[i]->Value;
			}
			GW->Rows->RemoveAt(movableIndex + isMovableOffset);
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	// Установка значения в ячейке
	bool set(int row, int col, DBType* data)
	{
		saveDB();
		if (DB->set(row, col, data))
		{
			GW->Rows[row]->Cells[col]->Value = data->toString().toSysString();
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}

	bool set(int row, int col, DBString strData)
	{
		saveDB();
		auto data = DataBase::newElementFromString(DBType::types(DB->getType(col)), strData);
		if (DB->set(row, col, data))
		{
			GW->Rows[row]->Cells[col]->Value = data->toString().toSysString();
			flushDB();
			return true;
		}
		else {
			backup();
			return false;
		}
	}
};

#endif 