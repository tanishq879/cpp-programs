#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    void setNumbers(int x, int y) {
        num1 = x;
        num2 = y;
    }
};

class Derived : public Base {
public:
    void displayProduct() {
        cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
    }
};

int main() {
    Derived obj;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    obj.setNumbers(a, b);
    obj.displayProduct();
    return 0;
}
