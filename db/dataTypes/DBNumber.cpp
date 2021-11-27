#ifndef DBNUMBER_CPP
#define DBNUMBER_CPP

#include <iostream>
#include "DBType.h"

class DBNumber : public DBType {
private:
    double number;
    bool correct;
public:
    static const int type = tNumber;

    DBNumber() {
        number = 0;
        correct = true;
    }

    DBNumber(int data) {
        this->number = (double) data;
        correct = true;
    }

    DBNumber(double data) {
        this->number = data;
        correct = true;
    }

    DBNumber(bool correctNum) {
        this->number = 0;
        correct = correctNum;
    }

    double get() {
        return number;
    }

    void set(double data) {
        this->number = data;
    }

    bool isCorrect() override {
        return correct;
    }

    int getBuffSize() override {
        return toString().length();
    }

    int getType() override {
        return type;
    }

    bool biggerThan(DBType* comp) override {
        if (isCorrect() && ((DBNumber*)comp)->isCorrect()) {
            return number > ((DBNumber*)comp)->number;
        }
        return false;
    }

    bool lesserThan(DBType* comp) override {
        if (isCorrect() && ((DBNumber*)comp)->isCorrect()) {
            return number < ((DBNumber*)comp)->number;
        }
        return false;
    }

    DBType *copy() override {
        return new DBNumber(number);
    }

    double pow(double base, int power) {
        if (power == 0) {
            return 1;
        } else {
            return pow(base, power - 1) * base;
        }
    }

    static bool isDigit(char c) {
        return c <= '9' && c >= '0';
    }

    static DBNumber* toInteger(const char* integer) {
        if (strlen(integer) == 0) return new DBNumber(false);

        bool isNegative = false;
        unsigned int i = 0;

        while (integer[i] == ' ') i++;
        if (integer[i] == '-') {
            isNegative = true;
            i++;
        }

        int ans = 0;
        for (i; i < strlen(integer); i++) {
            if (integer[i] == ' ') break;
            if (!isDigit(integer[i])) return new DBNumber(false);
            ans = ans * 10 + (integer[i] - '0');
        }
        ans = isNegative ? -1 * ans : ans;
        return new DBNumber(ans);
    }

    static DBNumber *toDouble(const char *num) {
        if (strlen(num) == 0) return new DBNumber(false);

        bool isNegative = false;
        unsigned int i = 0;

        while (num[i] == ' ') i++;
        if (num[i] == '-') {
            isNegative = true;
            i++;
        }

        double ans = 0;
        for (i; i < strlen(num); i++) {
            if (num[i] == ' ') break;
            if (num[i] == '.') break;
            if (!isDigit(num[i])) return new DBNumber(false);
            ans = ans * 10 + (num[i] - '0');
        }

        double fracAns = 0;
        double negativePow = 0.1;
        if (i < strlen(num) && num[i] == '.') {
            i++;
            for (i; i < strlen(num); i++) {
                if (num[i] == ' ') break;
                if (negativePow < 0.00001) break;
                if (!isDigit(num[i])) return new DBNumber(false);
                fracAns = fracAns + negativePow * (num[i] - '0');
                negativePow *= 0.1;
            }
        }

        ans = isNegative ? -1 * (ans + fracAns) : ans + fracAns;
        return new DBNumber(ans);
    }

    DBNumber(DBString data) {
        DBNumber *num = DBNumber::toDouble(data.toCharSequence());
        this->number = num->get();
        this->correct = num->isCorrect();
    }

    DBString toString() {
        if (!isCorrect()) return {"%ERROR%"};
        DBString ans;
        int intNum = (int) number;
        double fracNum;

        if (intNum < 0) {
            intNum *= -1;
            fracNum = -1 * number - intNum;
        } else {
            fracNum = number - intNum;
        }

        do {
            ans.addBefore((char) ((int) intNum % 10 + '0'));
            intNum = (int) (intNum / 10);
        } while (intNum > 0);

        if (number < 0) {
            ans.addBefore("-");
        }

        if (fracNum != 0) {
            ans = ans + '.';
        }

        int fracCount = 5;
        while (fracNum > 1 / pow(10, fracCount) && fracCount > 0) {
            ans = ans + ((char) ((int) (fracNum * 10) + '0'));
            fracNum = fracNum * 10 - ((int) (fracNum * 10));
            fracCount--;
        }

        return ans;
    }

    bool equals(DBType *comp) override {
        return isCorrect() && comp->isCorrect() && number == ((DBNumber*)comp)->number;
    }
};

#endif