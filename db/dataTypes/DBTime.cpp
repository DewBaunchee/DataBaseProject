#ifndef DBTIME_CPP
#define DBTIME_CPP

#include <iostream>
#include "DBType.h"
#include "DBNumber.cpp"

#define MINUTES_COUNT 60
#define SECONDS_COUNT 60
#define MILLISECONDS_COUNT 1000

class DBTime : public DBType {
private:
	int hours, minutes, seconds, milliseconds;
public:

	static const int type = tTime;

	DBTime() {
		setHours(0);
		setMinutes(0);
		setSeconds(0);
		setMilliseconds(0);
	}

	DBTime(int hours, int minutes, int seconds, int milliseconds) {
		setHours(hours);
		setMinutes(minutes);
		setSeconds(seconds);
		setMilliseconds(milliseconds);
	}

	DBTime(int hours, int minutes, int seconds) {
		setHours(hours);
		setMinutes(minutes);
		setSeconds(seconds);
		setMilliseconds(0);
	}

	DBTime(int milliseconds) {
		setHours(milliseconds / (MINUTES_COUNT * SECONDS_COUNT * MILLISECONDS_COUNT));
		setMinutes(milliseconds % (MINUTES_COUNT * SECONDS_COUNT * MILLISECONDS_COUNT) /
			(SECONDS_COUNT * MILLISECONDS_COUNT));
		setSeconds(milliseconds % (SECONDS_COUNT * MILLISECONDS_COUNT) / (MILLISECONDS_COUNT));
		setMilliseconds(milliseconds % MILLISECONDS_COUNT);
	}

	static bool isDigit(char c) {
		return c <= '9' && c >= '0';
	}

	DBTime(DBString time) {
		int ints[4]{ 0, 0, 0, 0 };
		int intCount = 0;
		bool prevIsDigit = false;
		for (int i = 0; i < time.length(); i++)
		{
			if (!isDigit(time.getc(i)))
			{
				if (prevIsDigit) {
					intCount++;
					prevIsDigit = false;
				}
				continue;
			}
			if (intCount == 4) {
				setMilliseconds(-1);
				break;
			}

			prevIsDigit = true;
			ints[intCount] = ints[intCount] * 10 + (time.getc(i) - '0');
		}

		if (prevIsDigit) {
			intCount++;
		}
		if (intCount == 4) {
			setMilliseconds(-1);
		}
		switch (intCount)
		{
		case 0: setMilliseconds(-1); break;
		case 1:
			setHours(ints[0] / (MINUTES_COUNT * SECONDS_COUNT * MILLISECONDS_COUNT));
			setMinutes(ints[0] % (MINUTES_COUNT * SECONDS_COUNT * MILLISECONDS_COUNT) /
				(SECONDS_COUNT * MILLISECONDS_COUNT));
			setSeconds(ints[0] % (SECONDS_COUNT * MILLISECONDS_COUNT) / (MILLISECONDS_COUNT));
			setMilliseconds(ints[0] % MILLISECONDS_COUNT);
			break;
		case 2: setHours(ints[0]); setMinutes(ints[1]); setSeconds(0); setMilliseconds(0); break;
		case 3: setHours(ints[0]); setMinutes(ints[1]); setSeconds(ints[2]); setMilliseconds(0); break;
		case 4: setHours(ints[0]); setMinutes(ints[1]); setSeconds(ints[2]); setMilliseconds(ints[3]); break;
		}
	}

	void setHours(int inHours) {
		if (inHours > 23 || inHours < 0) {
			this->hours = -1;
		}
		else {
			this->hours = inHours;
		}
	}

	void setMinutes(int inMinutes) {
		if (inMinutes > 59 || inMinutes < 0) {
			this->minutes = -1;
		}
		else {
			this->minutes = inMinutes;
		}
	}

	void setSeconds(int inSeconds) {
		if (inSeconds > 59 || inSeconds < 0) {
			this->seconds = -1;
		}
		else {
			this->seconds = inSeconds;
		}
	}

	void setMilliseconds(int inMilliseconds) {
		if (inMilliseconds > 999 || inMilliseconds < 0) {
			this->milliseconds = -1;
		}
		else {
			this->milliseconds = inMilliseconds;
		}
	}

	bool isCorrect() override {
		return hours != -1 && minutes != -1 && seconds != -1 && milliseconds != -1;
	}

	int getBuffSize() override {
		return toString().length();
	}

	int getType() override {
		return type;
	}

	DBString toString() {
		if (!isCorrect()) return { "%ERROR%" };
		DBString ans;
		ans = ans + (char)(hours / 10 + '0') + (char)(hours % 10 + '0') + ":";
		ans = ans + (char)(minutes / 10 + '0') + (char)(minutes % 10 + '0');
		if (seconds != 0) {
			ans = ans + ":" + (char)(seconds / 10 + '0') + (char)(seconds % 10 + '0');
		}
		if (milliseconds != 0) {
			ans = ans + "." + (char)(milliseconds / 100 + '0') + (char)((milliseconds / 10) % 10 + '0') +
				(char)(milliseconds % 10 + '0');
		}
		return ans;
	}

	bool biggerThan(DBType* comp) override {
		if (isCorrect() && ((DBTime*)comp)->isCorrect()) {
			int cHours = ((DBTime*)comp)->hours;
			int cMinutes = ((DBTime*)comp)->minutes;
			int cSeconds = ((DBTime*)comp)->seconds;
			int cMilliseconds = ((DBTime*)comp)->milliseconds;

			if (cHours > cHours) return true;
			if (cHours < cHours) return false;

			if (cMinutes > cMinutes) return true;
			if (cMinutes < cMinutes) return false;

			if (cSeconds > cSeconds) return true;
			if (cSeconds < cSeconds) return false;

			if (cMilliseconds > cMilliseconds) return true;
			if (cMilliseconds < cMilliseconds) return false;
		}
		return false;
	}

	bool lesserThan(DBType* comp) override {
		if (isCorrect() && ((DBTime*)comp)->isCorrect()) {
			int cHours = ((DBTime*)comp)->hours;
			int cMinutes = ((DBTime*)comp)->minutes;
			int cSeconds = ((DBTime*)comp)->seconds;
			int cMilliseconds = ((DBTime*)comp)->milliseconds;

			if (cHours > cHours) return false;
			if (cHours < cHours) return true;

			if (cMinutes > cMinutes) return false;
			if (cMinutes < cMinutes) return true;

			if (cSeconds > cSeconds) return false;
			if (cSeconds < cSeconds) return true;

			if (cMilliseconds > cMilliseconds) return false;
			if (cMilliseconds < cMilliseconds) return true;
		}
		return false;
	}

	DBType* copy() override {
		return new DBTime(hours, minutes, seconds, milliseconds);
	}

	bool equals(DBType* comp) override {
		return isCorrect() && comp->isCorrect() && hours == ((DBTime*)comp)->hours &&
			minutes == ((DBTime*)comp)->minutes &&
			seconds == ((DBTime*)comp)->seconds &&
			milliseconds == ((DBTime*)comp)->milliseconds;
	}
};

#endif