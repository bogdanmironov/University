#include <cstddef>
#include "functions.cpp"

void print(const int *array, size_t size, size_t capacity);
void allocateMemory(int *&array, size_t capacity);
void freeMemory(int *&array, size_t &size, size_t &capacity);
bool reallocateMemory(int *&array, size_t size, size_t newCapacity);
bool resize(int *&array, size_t size, size_t &capacity);
bool addElement(int *&array, size_t &size, size_t &capacity, int newElem);
// bool addElement(int *&array, size_t &size, size_t &capacity, int newElem, size_t position);
// bool removeElement(int *&array, size_t &size, size_t &capacity, size_t position);