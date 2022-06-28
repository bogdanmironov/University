//
// Created by bogdan8 on 6/26/22.
//

#include "../headers/Library.h"
#include <iostream>

template<>
void Library<std::string>::print_title() {
    std::cout << *book << std::endl;
}

template<typename T>
Library<T>::Library(T *book) {
    this->book = book;
}


