#include <iostream>
#include "task2.hpp"

#define STUDENTS_IN_GROUP 25

struct group_t {
    student_t *students;
    float avg_score;
};

group_t* initGroup() {
    group_t *group = new group_t();
    group->students = new student_t[STUDENTS_IN_GROUP];

    int fn, avgMark, course;
    int i = 0;
    while(std::cin >> fn >> course >> avgMark) {
        group->students[i++] = *(initStudent(fn, course, avgMark)); //Need del

        if (i >= 25) {
            break;
        } 
    }

    return group;
}

void destroyGroup(group_t *group) {
    int i = 0;
    
    delete[] group->students;

    delete group;
}


int hasScolarship(float minMark, group_t group[STUDENTS_IN_GROUP]) {
    int studentsWithScolarship = 0;
    int i = 0;

    while(group->students != nullptr && i <= 25) {
        
        if (group->students[i].avgMark >= minMark) {
            ++studentsWithScolarship;
        }

        ++i;
    }

    return studentsWithScolarship;
}