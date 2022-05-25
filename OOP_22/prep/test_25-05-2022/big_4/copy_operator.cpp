#include <iostream>

class Construct {
    int a;
public:
    Construct(int a = 1);
    Construct(Construct const& other);
    ~Construct();

    Construct& operator=(Construct const& other);

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
    std::cout << "Cooy Construct(" << getA() << ")" << std::endl;
}

Construct& Construct::operator=(Construct const& other) {
    if (this != &other) {
        setA(other.getA() + 2);

        std::cout << "Operator =(" << getA() << ")" << std::endl;
    }

    return *this;
}

int main() {
    Construct c(1);
    Construct c2 = c;

    Construct c3(3), c4;
    c3 = c4;
}