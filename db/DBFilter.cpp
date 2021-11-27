#ifndef DBFILTER_CPP
#define DBFILTER_CPP

#include "DBRecord.cpp"

class DBFilter {
private:
	bool isStrict;
	bool** filter;


	/************
	* Filter struct
	* Fields: 0, 1, 2, 3, 4, ...
	* 0:   <:
	* 1:   >:
	* 2:   =:
	* 3:none:
	************/

	int recSize;
	DBRecord<DBType*>* comparable;
public:

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

	DBFilter(bool mode, DBRecord<DBString*>* rec, DBRecord<DBNumber*>* types) {
		isStrict = mode;
		recSize = rec->getSize();

		filter = (bool**)calloc(4, sizeof(bool));
		for (int i = 0; i < 4; i++) {
			filter[i] = (bool*)calloc(recSize, sizeof(bool));
		}

		comparable = new DBRecord<DBType*>();
		for (int i = 0; i < recSize; i++) {
			DBString* temp = rec->get(i);
			DBString conditions = temp->indexOf("|") > -1 ? temp->substr(0, temp->indexOf("|")) : "";

			filter[0][i] = (conditions.indexOf("<") > -1);
			filter[1][i] = (conditions.indexOf(">") > -1);
			filter[2][i] = (conditions.indexOf("=") > -1);
			filter[3][i] = !(filter[0][i] || filter[1][i] || filter[2][i]);

			comparable->add(newElementFromString(DBType::types(types->get(i)->get()), temp->indexOf("|") > -1 ? temp->substr(temp->indexOf("|") + 1) : ""));
		}
	}

	bool matches(DBRecord<DBType*>* rec) {
		if (rec->getSize() != recSize) return false;
		bool hasConditions = false;
		for (int j = 0; j < recSize; j++) {
			if (filter[3][j]) continue;

			DBType* c1 = comparable->get(j);
			DBType* c2 = rec->get(j);
			bool result = false;

			if (filter[0][j]) result = result || c2->lesserThan(c1);
			if (filter[1][j]) result = result || c2->biggerThan(c1);
			if (filter[2][j]) result = result || c2->equals(c1);

			hasConditions = true;
			if (isStrict)
			{
				if (result == false) return false;
			}
			else
			{
				if (result == true) return true;
			}
		}

		if (hasConditions) {
			return isStrict;
		}
		else {
			return !isStrict;
		}
	}
};

#endif