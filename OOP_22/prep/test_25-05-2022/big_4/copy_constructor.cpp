#include <iostream>

class Construct {
    int a;
public:
    Construct(int a = 1);
    Construct(Construct const& other);
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

Construct::Construct(Construct const& other) {
    setA(other.getA() + 1);
}

int main() {
    Construct defaultConstruct;
    Construct secondConstruct = defaultConstruct;

    std::cout << "1 - " << defaultConstruct.getA() << std::endl;
    std::cout << "2 - " << secondConstruct.getA() << std::endl;
}