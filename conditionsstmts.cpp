#include <iostream>                  
using namespace std;                 

int main()
{

// Declare first integer
    int num1;  
    
// Declare second integer
    int num2;                        

    // Ask the user to enter the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Check if num1 is greater than num2
    if(num1 > num2)
    {
        cout << num1 << " is greater than " << num2;
    }

    // Check if num1 is less than num2
    else if(num1 < num2)
    {
        cout << num1 << " is less than " << num2;
    }

    // If both conditions are false, the numbers are equal
    else
    {
        cout << num1 << " is equal to " << num2;
    }

    return 0;                        // End the program successfully
}