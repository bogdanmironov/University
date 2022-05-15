#pragma once
#include <iostream>

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
    Date(size_t seconds);

    size_t getYear() const;
    size_t getMonth() const;
    size_t getDay() const;
    size_t getHour() const;
    size_t getMin() const;
    size_t getSecond() const;

    void setYear();
    void setMonth();
    void setDay();
    void setHour();
    void setMin();
    void setSecond();

    int compare(const Date& other) const;

    size_t convertToUnixTimestamp() const;
};