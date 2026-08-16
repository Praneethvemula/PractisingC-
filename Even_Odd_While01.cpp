#include <iostream>
using namespace std;

int main()
{
    // Variables to count even and odd numbers
    int Evens = 0;
    int Odds = 0;

    // Variable to store the number entered by the user
    int Number;

    // Read the first number
    cout << "Enter a number (0 to stop): ";
    cin >> Number;

    // Continue the loop until the user enters 0
    while(Number != 0)
    {
        // Check whether the number is odd
        if(Number % 2 == 1)
        {
            // Increase the odd number counter
            Odds++;
        }
        else
        {
            // Increase the even number counter
            Evens++;
        }

        // Read the next number
        cout << "Enter another number (0 to stop): ";
        cin >> Number;
    }

    // Display the total number of even numbers
    cout << "Even numbers: " << Evens << endl;

    // Display the total number of odd numbers
    cout << "Odd numbers: " << Odds << endl;

    return 0;
}