#include <iostream>

using namespace std;

class A {
private:
    int a;
public:
    A(int aData = 1) { //If you delete default value the program crashes.Constructor isn't called without value explicitly
        a = aData;
        cout << "A(" << aData << ")" << endl;
    }
    
    A(A const& obj) {
        a = obj.a;
        cout << "Copy A(" << obj.a << ")" << endl;
    }
};

class B {
private:
    int b;
    A objA;
public:
    B(int bData = 1, int aData = 0) {
        b = bData;
        cout << "B(" << bData << "," << aData << ")" << endl;
        objA = A(10);
    }
    
    B(B const& obj) {
        b = obj.b;
        cout << "Copy B(" << obj.b << ")" << endl;
    }

};

int main() {
    B test1(1, 3);
    B test2 = test1;

    return 0;
}
