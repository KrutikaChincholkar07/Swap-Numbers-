#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore Swap: a = " << a << ", b = " << b << endl;

    // Swap using temp
    temp = a;
    a = b;
    b = temp;

    cout << "After Swap: a = " << a << ", b = " << b;

    return 0;
}
