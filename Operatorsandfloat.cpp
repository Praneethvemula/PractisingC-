#include <iostream>

using namespace std;

int main(void) {
     // Store the value of pi
    float pi = 3.14159265359;

    // Declare variables for input x and result y
    float x, y;

    // Variables to store pi squared and x squared
    float pi2, x2;

    // Ask the user to enter a value for x
    cout << "Enter value for x: ";

      // Read the value entered by the user
    cin >> x;

    // Calculate pi squared
    pi2 = pi * pi;

    // Calculate x squared
    x2 = x * x;

// Calculate the value of y using the given formula
    y = (x2 / (pi2 * (x2 + 0.5)))
        * (1 + (x2 / (pi2 * (x2 - 0.5))));
        
// Display the calculated value of y
    cout << "y = " << y;

    return 0;
}