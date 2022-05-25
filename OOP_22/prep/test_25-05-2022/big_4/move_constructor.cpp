#include <iostream>
#include <vector>

class Construct {
    size_t length;
    int *data;
public:
    Construct(size_t length);
    ~Construct();

    //Copy
    Construct(Construct const& other);
    Construct& operator=(Construct const& other);

    //Move
    Construct(Construct&& other);
    Construct& operator=(Construct&& other);
};

Construct::Construct(size_t length) : length(length) {
    this->data = new int[length];
}

Construct::~Construct() {
    delete[] data;
}

Construct::Construct(Construct const& other): length(other.length) {
    data = new int[other.length];
    std::copy(other.data, other.data + other.length, data);
}

Construct& Construct::operator=(Construct const& other) {
    if (this != &other) {
        delete[] data;

        length = other.length;
        data = new int[length];
        std::copy(other.data, other.data + other.length, data);
    }

    return *this;
}

Construct& Construct::operator=(Construct&& other) {
    if (this != &other) {
        delete[] data;

        data = other.data;
        length = other.length;

        other.data = nullptr;
        other.length = 0;
    }

    return *this;
}

Construct::Construct(Construct&& other): data(nullptr), length(0) {
    data = other.data;
    length = other.length;

    other.data = nullptr;
    other.length = 0;
}


int main() {
    std::vector<Construct> vec;
    vec.push_back(Construct(25));
}