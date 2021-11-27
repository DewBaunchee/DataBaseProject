#ifndef STRING_CPP
#define STRING_CPP

#include <iostream>
#include <cstring>

class DBString {
private:
    typedef struct sChar {
        char symbol;
        struct sChar *prev, *next;
    } *Char;

    Char begin, end;
    int size;
public:

    DBString() {
        begin = end = nullptr;
        size = 0;
    }

    DBString(const char *inText) {
        begin = end = nullptr;
        size = 0;
        for (unsigned int i = 0; i < strlen(inText); i++) {
            add(inText[i]);
        }
    }

    DBString(int inNumber) {

        begin = end = nullptr;
        size = 0;
        bool isNegative = false;
        if (inNumber < 0) {
            isNegative = true;
            inNumber *= -1;
        }

        do {
            addBefore((char) (inNumber % 10 + '0'));
            inNumber = (int) inNumber / 10;
        } while (inNumber > 0);

        if (isNegative) {
            addBefore("-");
        }
    }

    DBString add(char symbol) {
        Char newChar = (Char) malloc(sizeof(struct sChar));
        newChar->symbol = symbol;
        newChar->prev = nullptr;
        newChar->next = nullptr;

        if (begin == nullptr) {
            begin = end = newChar;
        } else {
            end->next = newChar;
            newChar->prev = end;
            end = newChar;
        }
        size++;
        return *this;
    }

    DBString addBefore(char symbol) {
        Char newChar = (Char) malloc(sizeof(struct sChar));
        newChar->symbol = symbol;
        newChar->prev = nullptr;
        newChar->next = nullptr;

        if (begin == nullptr) {
            begin = end = newChar;
        } else {
            begin->prev = newChar;
            newChar->next = begin;
            begin = newChar;
        }
        size++;
        return *this;
    }

    DBString add(const char *symbols) {
        for (unsigned int i = 0; i < strlen(symbols); i++) {
            this->add(symbols[i]);
        }
        return *this;
    }

    DBString addBefore(const char *symbols) {
        for (unsigned int i = 0; i < strlen(symbols); i++) {
            this->addBefore(symbols[i]);
        }
        return *this;
    }

    DBString addNTimes(char symbol, int n) {
        for (int i = 0; i < n; i++) {
            this->add(symbol);
        }
        return *this;
    }

    DBString addNTimes(const char *symbols, int n) {
        for (int i = 0; i < n; i++) {
            for (unsigned int j = 0; j < strlen(symbols); j++) {
                this->add(symbols[j]);
            }
        }
        return *this;
    }

    DBString trim() {
        DBString *str = new DBString("");
        Char current = begin;
        int start = 0, fin = length() - 1;

        while (current != nullptr) {
            if (current->symbol == ' ') {
                start++;
                current = current->next;
            }
            else {
                break;
            }
        }

        current = end;
        while (current != nullptr) {
            if (current->symbol == ' ') {
                end--;
                current = current->prev;
            }
            else {
                break;
            }
        }
        return fin <= start ? DBString("") : substr(start, fin + 1);
    }

    bool operator==(DBString text) {
        if (text.size != size) return false;
        Char currentA = text.begin;
        Char currentB = begin;
        while (currentA != nullptr) {
            if (currentA->symbol != currentB->symbol) return false;
            currentA = currentA->next;
            currentB = currentB->next;
        }
        return true;
    }

    DBString operator+(DBString text) {
        char *symbols = text.toCharSequence();
        for (int i = 0; i < text.size; i++) {
            this->add(symbols[i]);
        }
        return *this;
    }

    DBString operator+(const char *symbols) {
        for (unsigned int i = 0; i < strlen(symbols); i++) {
            this->add(symbols[i]);
        }
        return *this;
    }

    DBString operator+(char symbol) {
        this->add(symbol);
        return *this;
    }

    bool operator>(DBString comp) {
        Char c1 = begin;
        Char c2 = comp.begin;

        while (c1 != nullptr && c2 != nullptr) {
            if (c1->symbol > c2->symbol) return true;
            if (c1->symbol < c2->symbol) return false;
        }

        if (c1 != nullptr) return true;

        return false;
    }

    bool operator<(DBString comp) {

        Char c1 = begin;
        Char c2 = comp.begin;

        while (c1 != nullptr && c2 != nullptr) {
            if (c1->symbol > c2->symbol) return false;
            if (c1->symbol < c2->symbol) return true;
        }

        if (c2 != nullptr) return true;

        return false;
    }

    char getc(int i) {
        if (i < 0) throw "Index is out of bounds";
        Char current = begin;
        while (i > 0 && current != nullptr) {
            current = current->next;
            i--;
        }

        if (current == nullptr) throw "Index is out of bounds";
        return current->symbol;
    }

    int indexOf(const char *str) {
        Char current = begin;
        int i = 0;
        int len = strlen(str);
        while (i < length()) {
            for (int j = 0; j < len; j++) {
                if (j == len - 1 && current->symbol == str[j]) return i - len + 1;
                if (current->symbol != str[j]) break;
                i++;
                current = current->next;
            }
            i++;
            current = current->next;
        }
        return -1;
    }

    int length() {
        return size;
    }

    DBString substr(int start, int to) {
        DBString str;
        int i = 0;
        Char current = begin;
        while (i < start && current != nullptr) {
            current = current->next;
        }

        while (i < to && current != nullptr) {
            str.add(current->symbol);
            current = current->next;
            i++;
        }
        return str;
    }

    DBString substr(int start) {
        DBString str;
        int i = 0;
        Char current = begin;
        while (i < start && current != nullptr) {
            current = current->next;
            i++;
        }

        while (current != nullptr) {
            str.add(current->symbol);
            current = current->next;
        }
        return str;
    }

    char *toCharSequence() {
        char *ans = new char[length() + 1];
        Char current = begin;
        for (int i = 0; i < size; i++) {
            ans[i] = current->symbol;
            current = current->next;
        }
        ans[length()] = 0;
        return ans;
    }

    DBString* copy() {
        return new DBString(toCharSequence());
    }

    DBString toString() {
        return *(this->copy());
    }

    bool equals(DBString *comp) {
        return *comp == *this;
    }

    inline friend std::ostream &operator<<(std::ostream &out, DBString str) {
        out << str.toCharSequence();
        return out;
    }

#ifdef _WINUSER_
    DBString(System::String^ str)
    {
        begin = end = nullptr;
        size = 0;
        if (str != nullptr) {
            
            char c;
            for (int i = 0; i < str->Length; i++)
            {
                wctomb(&c, str[i]);
                add(c);
            }
        }
        else {
            add("%ERROR%");
        }
    }

    System::String^ toSysString()
    {
        return gcnew System::String(toCharSequence());
    }
#endif
};

#endif
