#include "Inheritance_Date.hpp"
#include "Time.hpp"
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
    case 4: case 6: case 9: case 11: return 30;
    case 2: return isLeapYear(year) ? 29 : 28;
    default: return 0;
    }
}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() const { return day; }
int Date::getMonth() const { return month; }
int Date::getYear() const { return year; }

void Date::addDays(int days) {
    day += days;
    while (day > getDaysInMonth(month, year)) {
        day -= getDaysInMonth(month, year);
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    while (day < 1) {
        month--;
        if (month < 1) {
            month = 12;
            year--;
        }
        day += getDaysInMonth(month, year);
    }
}

void Date::addMonths(int months) {
    month += months;
    while (month > 12) {
        month -= 12;
        year++;
    }
    while (month < 1) {
        month += 12;
        year--;
    }
    int daysInMonth = getDaysInMonth(month, year);
    if (day > daysInMonth) {
        day = daysInMonth;
    }
}

void Date::addYears(int years) {
    year += years;
    if (month == 2 && day == 29 && !isLeapYear(year)) {
        day = 28;
    }
}

int Date::calculateDateDifference(const Date& other) const {
    int totalDays = 0;
    Date temp = *this;
    while (temp.year != other.year || temp.month != other.month || temp.day != other.day) {
        temp.addDays(other.day > temp.day ? 1 : -1);
        totalDays++;
    }
    return totalDays;
}
