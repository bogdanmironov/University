#include "task3.hpp"

int main() {
    group_t *group = initGroup();

    std::cout<< hasScolarship(5.0, group) << std::endl; 

    destroyGroup(group);
}