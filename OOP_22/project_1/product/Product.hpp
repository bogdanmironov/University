#pragma once
#include <iostream>
#include "Date.hpp"

class Product {
    char *name = nullptr;
    char *manufacturer = nullptr;
    // char *comment = nullptr;
    // Date expiryDate;
    // Date admissionDate;
    int availableQuantity;
    int placement; //TODO Make class
public:
    Product() = default;
    Product(const char *name, const char *manufacturer, int availableQuantity, int placement);
    ~Product();

    int compare(const Product& other) const;
    void print() const;
};