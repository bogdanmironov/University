#include <iostream>

class Construct {
    int a;
public:
    Construct(int a = 1);
    ~Construct();

    int getA() const {
        return a;
    }

    void setA(int a) {
        this->a = a;
    }
    
};

Construct::Construct(int a) {
    setA(a);
    std::cout << "Construct(" << getA() << ")" << std::endl;
}

Construct::~Construct() {
    std::cout << "~Construct(" << getA() << ")" << std::endl;
}

int main() {
    Construct c1;
    Construct *ptrC2 = new Construct(2);
    std::cout << "wait..." << std::endl;
    delete ptrC2;
}