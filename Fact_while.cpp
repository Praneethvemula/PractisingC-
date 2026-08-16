#include<iostream>
using namespace std;

int main(){

    // Declare integer variables n, i, and factorial
    int n,i=1;

    // Initialize the factorial variable to 1
    int factorial = 1;

    // Prompt the user to enter a value for n
    cout<<"Enter a Value of n:";

    // Read the value entered by the user and store it in n
    cin>>n;

    // Use a while loop to calculate the factorial of n
    while(i<=n){

        // Multiply the current value of factorial by i and update factorial
        factorial = factorial * i;

        // Increase i by 1 (i = i + 1)
        i++;

    }
    // Display the calculated factorial
cout<<"The factorial of n is:"<<factorial<<endl;

return 0;
}