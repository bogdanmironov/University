#pragma once
#include <iostream>
#include "Product.hpp"

class Warehouse {
    Product *products = nullptr;
    int productCapacity;
public:
    Warehouse() = default;
    ~Warehouse();

    void load();
    void print() const;
    void addProduct();
    void removeProduct();
    void availabilityCheck();
    void cleanup();

    //Constructors
    //Getters and setters
    //Resizing for products
};