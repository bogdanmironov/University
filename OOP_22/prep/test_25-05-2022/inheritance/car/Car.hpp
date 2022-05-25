#ifndef CAR_HPP
#define CAR_HPP
#include "Vehicle.hpp"

class Car: virtual public Vehicle {
    bool isPolite;
    int numOfPassengers;
public:
    Car(const std::string &regnum, bool isPolite, int numOfPassengers);
    double getParkingPrice() override;
    Vehicle* clone() override;
};

#endif // !CAR_HPP
