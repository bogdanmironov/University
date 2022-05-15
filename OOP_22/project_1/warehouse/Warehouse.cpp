#pragma once
#include "Warehouse.hpp"
#include <iostream>
#include <fstream>
#include <exception>

void Warehouse::load() {
    std::ofstream f("database.txt", std::ios::app);

    if (!f.is_open()) {
        throw std::exception();        
    }

    f.close();
}

void Warehouse::print() const{
    for (int i = 0; i < productCapacity; ++i) {
        products[i].print();
    }
}