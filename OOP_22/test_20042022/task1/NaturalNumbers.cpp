#include "NaturalNumbers.h"
#include <iostream>
#include <exception>
#include <cstddef>

NaturalNumbers::NaturalNumbers() {
    this->sizeOfElements = 0;
    this->capacityOfElements = 1;
    this->sizeOfName = 8;
    this->capacityOfName = 10;

    elements = new int[capacityOfElements];
    name = new char[capacityOfName];

    this->name = "EmptySet";
    // memset
}

NaturalNumbers::NaturalNumbers(int *inputElements, char *inputName, int numberOfElements) {
    this->capacityOfElements = 16;
    this->capacityOfName = 16;

    int lengthOfName = 0;
    for (size_t i = 0; name[i] != '\0'; ++i) {
        ++lengthOfName;
    }

    if (lengthOfName > capacityOfName) {
        //resize with doubling
    }
    this->sizeOfName = lengthOfName;

    if (numberOfElements > capacityOfElements) {
        //rezise with doubling
    }
    this->sizeOfElements = numberOfElements;

    elements = new int[capacityOfElements];
    name = new char[capacityOfName];

    name = inputName;
    elements = inputElements;
}

NaturalNumbers::~NaturalNumbers() {
    delete[] elements;
    delete[] name;
}

int NaturalNumbers::at(int position) {
    if (position > capacityOfElements) {
        throw std::exception();
    } 

    return elements[position];
}

NaturalNumbers &NaturalNumbers::operator+(const NaturalNumbers &other) {

}

NaturalNumbers &NaturalNumbers::operator+=(const NaturalNumbers &other) {

}

NaturalNumbers &NaturalNumbers::operator>>(const NaturalNumbers &set){

}

NaturalNumbers &NaturalNumbers::operator<<(const NaturalNumbers &set) const {

}

NaturalNumbers &NaturalNumbers::operator[](int position) {

}