#pragma once
#include "Warehouse.hpp"
#include <iostream>
#include <exception>

//Public

Warehouse::Warehouse() {
    std::ifstream f("database.dat");

    if (!f.is_open()) {
        throw std::exception();        
    }

    size_t sizeOfFile = getFileSize(f);
    productsCount = sizeOfFile / sizeof(Product);
    productCapacity = productsCount * 2;
    products = new Product[productCapacity];
    f.read((char*)products, sizeOfFile);

    f.close();
}

void Warehouse::addProduct(Product product) { 
    productsCount++;
    if (productCapacity <= productsCount) {
        productCapacity *= 2;
        
        //TODO Extract to function
        Product *temp = new Product[productCapacity];
        for (int i = 0; i < productsCount; ++i) {
            temp[i] = products[i];
        }

        temp[productsCount-1] = product;

        if (products != nullptr) {
            delete[] products;
        }

        products = temp;
    } else {
        products[productsCount-1] = product;
    }
}

void Warehouse::saveProducts() {
    std::ofstream f("database.dat", std::ios::binary);

    if (!f.is_open()) {
        throw std::exception();        
    }

    f.write((const char*)products, productsCount * sizeof(Product));

    f.close();
}

void Warehouse::print() const {
    for (int i = 0; i < productCapacity; ++i) {
        products[i].print();
    }
}

//Private

size_t Warehouse::getFileSize(std::ifstream& f) const {
    size_t currentPos = f.tellg();
    f.seekg(0, std::ios::end);
    size_t size = f.tellg();

    f.seekg(currentPos);
    return size;
}