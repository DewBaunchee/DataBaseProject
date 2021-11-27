#pragma once

#include "DBString.cpp"

class DBType {
public:
	virtual bool isCorrect() = 0;

	virtual int getBuffSize() = 0;

	virtual DBString toString() = 0;

	virtual bool equals(DBType* comp) = 0;
	virtual int getType() = 0;
	virtual DBType* copy() = 0;
	virtual bool biggerThan(DBType* comp) = 0;
	virtual bool lesserThan(DBType* comp) = 0;

	enum types {
		tList, tRecord, tDate, tDay, tNumber, tText, tTime
	};

	static DBString typeToString(int type) {
		switch (type) {
		case tList:
			return "List";
		case tRecord:
			return "Record";
		case tDate:
			return "Date";
		case tDay:
			return "Day";
		case tNumber:
			return "Number";
		case tText:
			return "Text";
		case tTime:
			return "Time";
		default:
			return "Unknown";
		}
	}

	DBString text{};
	int number{};
	int day{};
	int year{};
	int month{};
	int date{};
	int hours{};
	int minutes{};
	int seconds{};
	int milliseconds{};
};
