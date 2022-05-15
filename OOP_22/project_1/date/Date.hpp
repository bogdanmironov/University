#pragma once
#include <iostream>

//Dates are in UTC
//Months have 30 days
//Years have 365 days
class Date {
    size_t year;
    size_t month;
    size_t day;
    size_t hour;
    size_t min;
    size_t second;
public:
    Date();
    Date(size_t year, size_t month, size_t day, size_t hour, size_t min, size_t second);
    Date(size_t year, size_t month, size_t day);
    Date(size_t timestamp);

    size_t getYear() const;
    size_t getMonth() const;
    size_t getDay() const;
    size_t getHour() const;
    size_t getMin() const;
    size_t getSecond() const;

    void setYear(size_t year);
    void setMonth(size_t month);
    void setDay(size_t day);
    void setHour(size_t hour);
    void setMin(size_t min);
    void setSecond(size_t second);

    int compare(const Date& other) const;

    size_t convertToUnixTimestamp() const;
};