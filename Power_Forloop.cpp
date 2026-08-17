#include <iostream>
using namespace std;

int main() {

    int pow = 1;

    // exp starts at 0
    // Loop continues while exp is less than 16
    // exp increases by 1 after every loop
    for (int exp = 0; exp <= 16; exp++) {

        // Display the current power and its value
        cout << "2 to the power of "<< exp << " is " << pow << endl;

        pow *= 2;
    }

    return 0;
}