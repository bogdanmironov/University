#pragma once
#include <iostream>
#include "Date.hpp"

class Product {
    char *name = nullptr;
    char *maufacturer = nullptr;
    char *comment = nullptr;
    Date expiryDate;
    Date admissionDate;
    int availableQuantity;
    int placement; //TODO Make class
};