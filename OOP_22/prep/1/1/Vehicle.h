#ifndef VEHICLE_H
#define VEHICLE_H

#include "Registration.h"
#include <string>

class Vehicle {
private:
    Registration reg;
    std::string description;

public:
    Vehicle(const char *regnum, const char *description);
    bool operator==(const Registration &regnum) const;
};  

#endif // !VEHICLE_H
