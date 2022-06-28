#ifndef OREP_LIBRARY_H
#define OREP_LIBRARY_H

#include <string>

template <typename T>
class Library {
    T* book;

public:
    Library(T *book);

    void print_title();

};

class Hi{
public:
    Hi() {
        printf("hello\n");
    }
};

#include "../impl/Library.tpp"
#endif //OREP_LIBRARY_H
