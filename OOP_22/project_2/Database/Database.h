//
// Created by bogdan8 on 6/17/22.
//

#ifndef PROJECT_2_DATABASE_H
#define PROJECT_2_DATABASE_H

#include <iostream>
#include <vector>
#include "../Table/Table.h"

class Database {
    std::vector<Table> tables;

public:
    void save();
    void load();



};

#endif //PROJECT_2_DATABASE_H
