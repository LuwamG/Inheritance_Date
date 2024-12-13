#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    Date(int day, int month, int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void addDays(int days);
    void addMonths(int months);
    void addYears(int years);
    int calculateDateDifference(const Date& other) const;
};

#endif
