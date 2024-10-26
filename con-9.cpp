#include <iostream>
using namespace std;

class A {
protected:
    int valueA;

public:
    A(int a) : valueA(a) {}
};

class B : public A {
protected:
    int valueB;

public:
    B(int a, int b) : A(a), valueB(b) {}
};

class C : public A {
protected:
    int valueC;

public:
    C(int a, int c) : A(a), valueC(c) {}
};

class D : public A {
protected:
    int valueD;

public:
    D(int a, int d) : A(a), valueD(d) {}
};

class E : public B {
protected:
    int valueE;

public:
    E(int a, int b, int e) : B(a, b), valueE(e) {}

    void display() {
        cout << "Value from A: " << valueA << endl;
        cout << "Value from B: " << valueB << endl;
        cout << "Value from E: " << valueE << endl;
    }
};

int main() {
    int a, b, e;
    cout << "Enter values for A, B, and E: ";
    cin >> a >> b >> e;

    E obj(a, b, e);
    obj.display();

    return 0;
}