//
// Created by bogdan8 on 6/20/22.
//

#include "Column.h"
#include <iostream>

template<typename T>
Column<T>::~Column() {}

template<typename T>
ColumnType Column<T>::getType() const {
    return DOUBLE;
}

template<typename T>
T *Column<T>::getValue() const {
    return nullptr;
}

template<typename T>
Column<T>::Column(T *value) {
    std::string columnTypeName = typeid(T).name();
    type = ColumnType::INT;

    if (columnTypeName == "int") {
        std::cout<< "Columns do not support type. [" << columnTypeName << "]" <<  std::endl;
    } else {
        std::cout<< "Columns do not support type. [" << columnTypeName << "]" <<  std::endl;
    }
}

