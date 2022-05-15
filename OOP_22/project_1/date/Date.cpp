#pragma once
#include "Date.hpp"
#include <iostream>

Date::Date() : Date(1970, 0, 0, 0, 0, 0) {}

Date::Date(size_t year, size_t month, size_t day, size_t hour, size_t min, size_t second) {
    setYear(year);
    setMonth(month);
    setDay(day);
    setHour(hour);
    setMin(min);
    setSecond(second);
}

Date::Date(size_t year, size_t month, size_t day) {
    setYear(year);
    setMonth(month);
    setDay(day);
    setHour(0);
    setMin(0);
    setSecond(0);
}

Date::Date(size_t timestamp) {
    setYear((timestamp / (365 * 30 * 24 * 60 * 60)) + 1970);
    timestamp %= (365 * 30 * 24 * 60 * 60);

    setMonth(timestamp / (30 * 24 * 60 * 60));
    timestamp %= (30 * 24 * 60 * 60);

    setDay(timestamp / (24 * 60 * 60));
    timestamp %= (24 * 60 * 60);

    setHour(timestamp / (60 * 60));
	timestamp %= (60 * 60);

	setMin(timestamp / 60);
	timestamp %= 60;

	setSecond(timestamp);
}