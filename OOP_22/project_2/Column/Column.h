//
// Created by bogdan8 on 6/20/22.
//

#ifndef PROJECT_2_COLUMN_H
#define PROJECT_2_COLUMN_H

#include "ColumnType.h"
#include <string>

template<typename T>
class Column {
    ColumnType type;
    int *intValue = nullptr;
    std::string stringValue = nullptr;
    double *doubleValue= nullptr;

public:
    explicit Column(T* value);

    ~Column();

    ColumnType getType() const;

    T *getValue() const;
};


#endif //PROJECT_2_COLUMN_H
