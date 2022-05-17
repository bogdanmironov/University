#pragma once
#include <iostream>
#include <fstream>
#include "Product.hpp"

class Warehouse {
    Product *products = nullptr;
    int productCapacity, productsCount;

    size_t getFileSize(std::ifstream& f) const;
public:
    Warehouse();
    ~Warehouse();

    void print() const;
    void addProduct(Product product);
    void saveProducts();
    void removeProduct();
    void availabilityCheck();
    void cleanup();

    //Constructors
    //Getters and setters
    //Resizing for products
};