#pragma once
#include "Date.hpp"
#include <iostream>
#include <exception>

#define YEAR_LENGTH (365 * 30 * 24 * 60 * 60)
#define MONTH_LENGTH (30 * 24 * 60 * 60)
#define DAY_LENGTH (24 * 60 * 60)
#define HOUR_LENGTH (60 * 60)
#define MIN_LENGTH (60)

//Constructors
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
    setYear((timestamp / YEAR_LENGTH) + 1970);
    timestamp %= YEAR_LENGTH;

    setMonth(timestamp / MONTH_LENGTH);
    timestamp %= MONTH_LENGTH;

    setDay(timestamp / DAY_LENGTH);
    timestamp %= DAY_LENGTH;

    setHour(timestamp / HOUR_LENGTH);
	timestamp %= HOUR_LENGTH;

	setMin(timestamp / MIN_LENGTH);
	timestamp %= MIN_LENGTH;

	setSecond(timestamp);
}


//Getters and setters
size_t Date::getYear() const {
	return year;
}

size_t Date::getMonth() const {
	return month;
}

size_t Date::getDay() const {
	return day;
}

size_t Date::getHour() const {
	return hour;
}

size_t Date::getMin() const {
	return min;
}

size_t Date::getSecond() const {
	return second;
}

void Date::setYear(size_t year) {
    if (year < 1970) {
        throw std::exception();
    }
	this->year = year;
}

void Date::setMonth(size_t month) {
    if (month > 12) {
        throw std::exception();
    }
	this->month = month;
}

void Date::setDay(size_t day) {
    if (day > 30) {
        throw std::exception();
    }
	this->month = day;
}

void Date::setHour(size_t hour) {
    if (hour > 23) {
        throw std::exception();
    }
	this->hour = hour;
}

void Date::setMin(size_t min) {
    if (min > 59) {
        throw std::exception();
    }
	this->min = min;
}

void Date::setSecond(size_t second) {
    if (second > 59) {
        throw std::exception();
    }
	this->second = second;
}


//Functions
size_t Date::convertToUnixTimestamp() const {
    return ((year - 1970) * YEAR_LENGTH)
    + (month * MONTH_LENGTH)
    + (day * DAY_LENGTH)
    + (hour * HOUR_LENGTH)
    + (min * MIN_LENGTH)
    + (second);
}

int Date::compare(const Date &other) const {
    size_t timestamp = convertToUnixTimestamp();
    size_t otherTimestamp = other.convertToUnixTimestamp();

    if (timestamp > otherTimestamp) {
        return 1;
    } else if (timestamp < otherTimestamp) {
        return -1;
    } else {
        return 0;
    }
}