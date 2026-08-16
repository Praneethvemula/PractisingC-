#include <iostream>                  

using namespace std;                 

int main()
{
    // Declare an integer variable and assign 45
    int num = 45;

    // Display the number in hexadecimal (base 16)
    cout << "The number in hexadecimal is: "
         << hex << num << endl;

    // Display the number in octal (base 8)
    cout << "The number in octal is: "
         << oct << num << endl;

    // Display the number in decimal (base 10)
    cout << "The number in decimal is: "
         << dec << num << endl;

    // End the program successfully
    return 0;
}