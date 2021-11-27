#ifndef DBDAY_CPP
#define DBDAY_CPP

#include <iostream>
#include "DBType.h"

class DBDay : public DBType {
private:
    int day{};
public:

    static const int type = tDay;

    DBDay() {
        day = 1;
    }

    DBDay(int inDay) {
        setDay(inDay);
    }

    static bool isDigit(char c) {
        return c <= '9' && c >= '0';
    }

    DBDay(DBString inDay) {
        int tempDay = 0;
        int intCount = 0;
        bool prevIsDigit = false;
        for (int i = 0; i < inDay.length(); i++) {
            if (!isDigit(inDay.getc(i))) {
                if (prevIsDigit) {
                    intCount++;
                    prevIsDigit = false;
                }
                continue;
            }
            if (intCount == 2) {
                setDay(-1);
                break;
            }

            prevIsDigit = true;
            tempDay = tempDay * 10 + (inDay.getc(i) - '0');
        }

        if (prevIsDigit) {
            intCount++;
        }
        if (intCount == 2) {
            setDay(-1);
        }
        switch (intCount) {
            case 0:
                for(int i = 1; i <= 7; i++) {
                    char * name = dayName(i);
                    char * lower = new char[strlen(name) + 1];
                    lower[0] = name[0] + 'a' - 'A';
                    for(unsigned int i = 1; i < strlen(name); i++) {
                        lower[i] = name[i];
                    }
                    lower[strlen(name)] = 0;
                    if(inDay.indexOf(dayName(i)) > -1 || inDay.indexOf(lower) > -1)
                    {
                        setDay(i);
                        break;
                    }
                }
                break;
            case 1:
                setDay(tempDay);
                break;
        }
    }

    void setDay(int inDay) {
        if (inDay > 7 || inDay < 1) {
            this->day = -1;
        } else {
            this->day = inDay;
        }
    }

    bool isCorrect() override {
        return day != -1;
    }

    int getBuffSize() override {
        return toString().length();
    }

    int getType() override {
        return type;
    }

    static char *dayName(int index) {
        switch (index) {
            case 1:
                return (char *) "Monday";
            case 2:
                return (char *) "Tuesday";
            case 3:
                return (char *) "Wednesday";
            case 4:
                return (char *) "Thursday";
            case 5:
                return (char *) "Friday";
            case 6:
                return (char *) "Saturday";
            case 7:
                return (char *) "Sunday";
            default:
                return (char *) "UNKNOWN";
        }
    }

    bool biggerThan(DBType* comp) override {
        return isCorrect() && ((DBDay*)comp)->isCorrect() && day > ((DBDay*)comp)->day;
    }

    bool lesserThan(DBType* comp) override {
        return isCorrect() && ((DBDay*)comp)->isCorrect() && day < ((DBDay*)comp)->day;
    }

    DBType *copy() override {
        return new DBDay(day);
    }

    DBString toString() {
        return {dayName(day)};
    }

    bool equals(DBType *comp) override {
        return isCorrect() && comp->isCorrect() && day == ((DBDay*)comp)->day;
    }
};

#endif