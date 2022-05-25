#include <iostream>

class Construct {
    int a, b;
public:
    Construct() {
        a = 10;
        b = 20;
    }


    int getA() {
        return a;
    }

    int getB() {
        return b;
    }

};


int main () {
    Construct c;

    std::cout << "a: " << c.getA() << " | b: " << c.getB() << std::endl;
}