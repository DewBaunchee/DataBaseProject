#ifndef DBTEXT_CPP
#define DBTEXT_CPP

#include <iostream>
#include "DBType.h"

class DBText : public DBType {
private:
    DBString text;
public:
    static const int type = tText;

    DBText() {
        text = DBString("Just text...");
    }

    DBText(DBString data) {
        this->text = data;
    }

    DBString get() {
        return text;
    }

    void set(DBString data) {
        this->text = data;
    }

    bool isCorrect() override {
        return true;
    }

    int getBuffSize() override {
        return toString().length();
    }

    int getType() override {
        return type;
    }

    double pow(double base, int power) {
        if (power == 0) {
            return 1;
        } else {
            return pow(base, power - 1) * base;
        }
    }

    DBString toString() {
        return text;
    }

    bool equals(DBType *comp) override {
        return isCorrect() && comp->isCorrect() && text == ((DBText*)comp)->text;
    }

    bool biggerThan(DBType* comp) override {
        if (isCorrect() && ((DBText*)comp)->isCorrect()) {
            return text > ((DBText*)comp)->text;
        }
        return false;
    }

    bool lesserThan(DBType* comp) override {
        if (isCorrect() && ((DBText*)comp)->isCorrect()) {
            return text < ((DBText*)comp)->text;
        }
        return false;
    }

    DBType *copy() override {
        return new DBText(text);
    }
};

#endif