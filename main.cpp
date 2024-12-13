#include "DateTime.hpp"
#include <iostream>
using namespace std;

int main() {
    DateTime dateTime(4, 2, 1999, 2, 20, 0);
    dateTime.displayDateTime();

    // Testing date and time arithmetic
    dateTime.addDays(30);
    dateTime.displayDateTime();
    dateTime.addMonths(2);
    dateTime.displayDateTime();
    dateTime.addYears(1);
    dateTime.displayDateTime();
    dateTime.addHours(5);
    dateTime.displayDateTime();
    dateTime.addMinutes(120);
    dateTime.displayDateTime();
    dateTime.addSeconds(3600);
    dateTime.displayDateTime();

    // Testing DateTime difference
    DateTime dt1(4, 2, 1999, 2, 20, 0);
    DateTime dt2(4, 3, 1999, 2, 20, 0);
    DateTime::difference(dt1, dt2);

    // Testing format
    string formatted = dateTime.format("Today is YYYY-MM-DD, and the time is HH:MM");
    cout << formatted << endl;

    return 0;
}
