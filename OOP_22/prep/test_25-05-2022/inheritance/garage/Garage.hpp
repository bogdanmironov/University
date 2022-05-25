#ifndef GARAGE_HPP
#define GARAGE_HPP
#include "Vehicle.hpp"
#include <vector>

class Garage
{
private:
    std::vector<Vehicle *> vehicles;
    void copy(const Garage &);
    void erase();

public:
    Garage() = default;
    Garage(const Garage &);
    Garage &operator=(const Garage &);

    const std::vector<Vehicle *> getVehicles();
    void addNewVehicle(Vehicle *&);
    void addNewVehicle(Vehicle *&&);

    ~Garage();
};

#endif // !GARAGE_HPP