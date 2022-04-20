#include <iostream>

struct complexNumber {
    float real;
    float imaginary;
};

complexNumber addComplex(complexNumber, complexNumber);
void printComplex(complexNumber);

int main() {

    complexNumber a = {5, 3};
    complexNumber b = {7, 4};

    printComplex(addComplex(a, b));

    return 0;
}

complexNumber addComplex(complexNumber a, complexNumber b) {
    complexNumber answer;
    answer.real = a.real + b.real;
    answer.imaginary = a.imaginary + b.imaginary;
    return answer;
}

void printComplex(complexNumber number) {
    std::cout << number.real << ((number.imaginary >= 0) ? "+" : "-") << number.imaginary << "i" << std::endl;
}