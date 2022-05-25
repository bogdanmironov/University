#include <iostream>

class Construct {
    int a, b;
public:
    Construct() {
        a = 10;
        b = 20;
    }

    Construct(int a, int b) {
        setA(a);
        setB(b);
    }


    int getA() const {
        return a;
    }

    int getB() const {
        return b;
    }

    void setA(int a) {
        this->a = a;
    }
    
    void setB(int b) {
        this->b = b;
    }

};


int main () {
    Construct c1, c2(30, 40);

    std::cout << "1:   a: " << c1.getA() << " | b: " << c1.getB() << std::endl;

    std::cout << "2:   a: " << c2.getA() << " | b: " << c2.getB() << std::endl;
}