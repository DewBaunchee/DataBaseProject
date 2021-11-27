#ifndef DBDATE_CPP
#define DBDATE_CPP

#include <iostream>
#include "DBType.h"

#define LEAP_YEAR(y) ((y) % 4 == 0) - ((y) % 100 == 0) + ((y) % 400 == 0)

class DBDate : public DBType {
private:
    int year, month, date;

    int dayCountInMonths[12] = {31, 28, 31, 30,
                                31, 30, 31, 31,
                                30, 31, 30, 31};
public:

    static const int type = tDate;

    DBDate() {
        setYear(2020);
        setMonth(1);
        setDate(1);
    }

    DBDate(int date, int month, int year) {
        setYear(year);
        setMonth(month);
        setDate(date);
    }

    static bool isDigit(char c) {
        return c <= '9' && c >= '0';
    }

    DBDate(DBString inDate) {
        int ints[3]{0, 0, 0};
        int intCount = 0;
        bool prevIsDigit = false;
        for (int i = 0; i < inDate.length(); i++) {
            if (!isDigit(inDate.getc(i))) {
                if (prevIsDigit) {
                    intCount++;
                    prevIsDigit = false;
                }
                continue;
            }
            if (intCount == 3) {
                setYear(-1);
                break;
            }

            prevIsDigit = true;
            ints[intCount] = ints[intCount] * 10 + (inDate.getc(i) - '0');
        }

        if (prevIsDigit) {
            intCount++;
        }
        if (intCount == 3) {
            setYear(-1);
        }
        switch (intCount) {
            case 0:
                setYear(-1);
                break;
            case 1:
                setYear(-1);
                break;
            case 2:
                setYear(1970);
                setMonth(ints[1]);
                for(unsigned int i = 1; i <= 12; i++) {
                    char * name = monthName(i);
                    char * lower = new char[strlen(name) + 1];
                    lower[0] = name[0] + 'a' - 'A';
                    for(unsigned int i = 1; i < strlen(name); i++) {
                        lower[i] = name[i];
                    }
                    lower[strlen(name)] = 0;
                    if(inDate.indexOf(monthName(i)) > -1 || inDate.indexOf(lower) > -1)
                    {
                        setMonth(i);
                        setYear(ints[1]);
                        break;
                    }
                }
                setDate(ints[0]);
                break;
            case 3:
                setYear(ints[2]);
                setMonth(ints[1]);
                setDate(ints[0]);
                break;
        }
    }

    void setYear(int inYear) {
        if (inYear > 9999 || inYear < 0) {
            this->year = -1;
        } else {
            this->year = inYear;
        }
    }

    void setMonth(int inMonth) {
        if (inMonth > 12 || inMonth < 1) {
            this->month = -1;
        } else {
            this->month = inMonth;
        }
    }

    void setDate(int inDate) {
        if (inDate > (dayCountInMonths[month - 1] + (month == 2 ? LEAP_YEAR(year) : 0)) || inDate < 1) {
            this->date = -1;
        } else {
            this->date = inDate;
        }
    }

    bool isCorrect() override {
        return year != -1 && month != -1 && date != -1;
    }

    int getBuffSize() override {
        return toString().length();
    }

    int getType() override {
        return type;
    }

    static char *monthName(int index) {
        switch (index) {
            case 1:
                return (char *) "January";
            case 2:
                return (char *) "February";
            case 3:
                return (char *) "March";
            case 4:
                return (char *) "April";
            case 5:
                return (char *) "May";
            case 6:
                return (char *) "June";
            case 7:
                return (char *) "Jule";
            case 8:
                return (char *) "August";
            case 9:
                return (char *) "September";
            case 10:
                return (char *) "October";
            case 11:
                return (char *) "November";
            case 12:
                return (char *) "December";
            default:
                return (char *) "UNKNOWN";
        }
    }

    bool biggerThan(DBType* comp) override {
        if (isCorrect() && ((DBDate*)comp)->isCorrect()) {
            int cYear = ((DBDate*)comp)->year;
            int cMonth = ((DBDate*)comp)->month;
            int cDate = ((DBDate*)comp)->date;

            if (year > cYear) return true;
            if(year < cYear) return false;

            if (month > cMonth) return true;
            if (month < cMonth) return false;

            if (date > cDate) return true;
            if (date < cDate) return false;
        }
        return false;
    }

    bool lesserThan(DBType* comp) override {
        if (isCorrect() && ((DBDate*)comp)->isCorrect()) {
            int cYear = ((DBDate*)comp)->year;
            int cMonth = ((DBDate*)comp)->month;
            int cDate = ((DBDate*)comp)->date;

            if (year > cYear) return false;
            if (year < cYear) return true;

            if (month > cMonth) return false;
            if (month < cMonth) return true;

            if (date > cDate) return false;
            if (date < cDate) return true;
        }
        return false;
    }

    DBType *copy() override {
        return new DBDate(date, month, year);
    }

    DBString toString() {
        if (!isCorrect()) return {"%ERROR%"};
        DBString ans;
        ans = ans + (char) (date / 10 + '0') + (char) (date % 10 + '0');
        ans = ans + " " + monthName(month) + ", ";
        ans = ans + (char) (year / 1000 + '0') +
              (char) ((year / 100) % 10 + '0') +
              (char) ((year / 10) % 10 + '0') +
              (char) (year % 10 + '0');
        return ans;
    }

    bool equals(DBType *comp) override {
        return isCorrect() && comp->isCorrect() &&
            year == ((DBDate*)comp)->year &&
               month == ((DBDate*)comp)->month &&
               date == ((DBDate*)comp)->date;
    }
};

#endif