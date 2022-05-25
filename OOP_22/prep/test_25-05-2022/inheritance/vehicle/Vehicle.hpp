#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include <string>

class Vehicle {
    std::string regnum;

public: 
    Vehicle(const std::string &regnum);
    const std::string& getRegnum();
    virtual double getParkingPrice() = 0;
    virtual Vehicle* clone() = 0;
    virtual ~Vehicle();
};

#endif // !VEHICLE_HPP