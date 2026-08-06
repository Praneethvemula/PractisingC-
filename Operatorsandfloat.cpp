#include <iostream>

using namespace std;

int main(void) {
    float pi = 3.14159265359;
    float x, y;
    float pi2, x2;

    cout << "Enter value for x: ";
    cin >> x;

    pi2 = pi * pi;
    x2 = x * x;

    y = (x2 / (pi2 * (x2 + 0.5)))
        * (1 + (x2 / (pi2 * (x2 - 0.5))));

    cout << "y = " << y;

    return 0;
}