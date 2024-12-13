#ifndef DATETIME_HPP
#define DATETIME_HPP

#include "Inheritance_Date.hpp"
#include "Time.hpp"
#include <string>
using namespace std;

class DateTime : public Date, public Time {
public:
    DateTime(int day, int month, int year, int hour, int minute, int second);

    void displayDateTime() const;
    static void difference(const DateTime& dt1, const DateTime& dt2);
    string format(const string& formatString) const;
};

#endif
