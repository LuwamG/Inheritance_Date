#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;
    int second;

    Time(int hour, int minute, int second);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void addSeconds(int seconds);
    void addMinutes(int minutes);
    void addHours(int hours);
    int calculateTimeDifference(const Time& other) const;
};

#endif
