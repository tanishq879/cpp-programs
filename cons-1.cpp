#include <iostream>
using namespace std;
class SumNatural {
    int n, sum;
public:
    SumNatural() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = n * (n + 1) / 2;
    }

    void display() {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumNatural obj;
    obj.display();
    return 0;
}
