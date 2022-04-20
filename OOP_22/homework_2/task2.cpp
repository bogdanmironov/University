#include <iostream>

#define SIZE_FN 5

struct student_t {
    int fn;
    int course;
    float avgMark;
};

student_t *initStudent(int fn, int course, float avgMark) {
    return new student_t{fn, course, avgMark};
}

void printStudent(student_t student) {
    std::cout << "FN: " << student.fn << " | Course: " << student.course << " | Average mark: " << student.avgMark << std::endl;
}