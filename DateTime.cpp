#include "DateTime.hpp"
#include <iostream>
using namespace std;

DateTime::DateTime(int day, int month, int year, int hour, int minute, int second)
    : Date(day, month, year), Time(hour, minute, second) {
}

void DateTime::displayDateTime() const {
    cout << getDay() << "/" << getMonth() << "/" << getYear() << " ";
    cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}

void DateTime::difference(const DateTime& dt1, const DateTime& dt2) {
    int dateDiff = dt1.calculateDateDifference(dt2);
    int timeDiff = dt1.calculateTimeDifference(dt2);

    int days = dateDiff;
    int hours = timeDiff / 3600;
    int minutes = (timeDiff % 3600) / 60;
    int seconds = timeDiff % 60;

    cout << "Difference: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

string DateTime::format(const string& formatString) const {
    string result = formatString;

    result.replace(result.find("YYYY"), 4, to_string(getYear()));
    result.replace(result.find("MM"), 2, to_string(getMonth()));
    result.replace(result.find("DD"), 2, to_string(getDay()));
    result.replace(result.find("HH"), 2, to_string(getHour()));
    result.replace(result.find("MM"), 2, to_string(getMinute()));
    result.replace(result.find("SS"), 2, to_string(getSecond()));

    return result;
}
#include "DateTime.hpp"
#include <iostream>
using namespace std;

DateTime::DateTime(int day, int month, int year, int hour, int minute, int second)
    : Date(day, month, year), Time(hour, minute, second) {
}

void DateTime::displayDateTime() const {
    cout << getDay() << "/" << getMonth() << "/" << getYear() << " ";
    cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}

void DateTime::difference(const DateTime& dt1, const DateTime& dt2) {
    int dateDiff = dt1.calculateDateDifference(dt2);
    int timeDiff = dt1.calculateTimeDifference(dt2);

    int days = dateDiff;
    int hours = timeDiff / 3600;
    int minutes = (timeDiff % 3600) / 60;
    int seconds = timeDiff % 60;

    cout << "Difference: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

string DateTime::format(const string& formatString) const {
    string result = formatString;

    result.replace(result.find("YYYY"), 4, to_string(getYear()));
    result.replace(result.find("MM"), 2, to_string(getMonth()));
    result.replace(result.find("DD"), 2, to_string(getDay()));
    result.replace(result.find("HH"), 2, to_string(getHour()));
    result.replace(result.find("MM"), 2, to_string(getMinute()));
    result.replace(result.find("SS"), 2, to_string(getSecond()));

    return result;
}
