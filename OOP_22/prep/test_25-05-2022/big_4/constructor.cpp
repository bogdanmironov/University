#include <iostream>

class Construct {
    int a, b, c;
public:
    // Construct() {
    //     a = 10;
    //     b = 20;
    // }

    // Construct(int a, int b) {
    //     setA(a);
    //     setB(b);
    // }

    // This takes care of the above constructors
    Construct(int a = 1, int b = 2, int c = 3);


    int getA() const {
        return a;
    }

    int getB() const {
        return b;
    }

    int getC() const {
        return c;
    }

    void setA(int a) {
        this->a = a;
    }
    
    void setB(int b) {
        this->b = b;
    }
    
    void setC(int c) {
        this->c = c;
    }

};

Construct::Construct(int a, int b, int c) {
    setA(a);
    setB(b);
    setC(c);
}


int main () {
    Construct c1, c2(30, 40), c3(50, 60, 70);

    std::cout << "1:   a: " << c1.getA() << " | b: " << c1.getB() << " | c: " << c1.getC() << std::endl;

    std::cout << "2:   a: " << c2.getA() << " | b: " << c2.getB() << " | c: " << c2.getC() << std::endl;

    std::cout << "3:   a: " << c3.getA() << " | b: " << c3.getB() << " | c: " << c3.getC() << std::endl;
}