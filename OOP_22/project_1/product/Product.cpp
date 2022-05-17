#pragma once
#include "Product.hpp"
#include <iostream>
#include <cstring>

Product::Product(const char *name, const char *manufacturer, int availableQuantity, int placement) {
    this->name = new char[strlen(name)];
    strcpy(this->name, name);

    this->manufacturer = new char[strlen(manufacturer)];
    strcpy(this->manufacturer, manufacturer);

    this->availableQuantity = availableQuantity;
    this->placement = placement;
}

Product::~Product() {
    delete[] this->name;
    delete[] this->manufacturer;
}