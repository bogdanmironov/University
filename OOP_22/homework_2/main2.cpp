#include "task2.hpp"

int main() {

    student_t *student = initStudent(12345, 2, 5.4);

    printStudent(*student);

    delete student;

    return 0;
}