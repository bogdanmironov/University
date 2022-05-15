#pragma once
#include <iostream>

class Warehouse {
private:
    
public:
    Warehouse() = default;
    ~Warehouse();

    void print() const;
    void addProduct();
    void removeProduct();
    void availabilityCheck();
    void cleanup();
};