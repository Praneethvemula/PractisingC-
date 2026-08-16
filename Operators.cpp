#include<iostream>
using namespace std;
int main(){

    // Declare integer variables
    int i, j,add,sub,mul,div,rem;

    // Assign values to i and j
    i = 13;
    j = 5;

    // Perform addition
    add=i+j;

    // Perform Subtraction
    sub=i-j;

    // Perform Multiplication
    mul=i*j;

    // Perform Division
    div=i/j;

    //Find the remainder
    rem= i % j;
    
      // Display the addition result
    cout<<"addition:"<<add<<endl;

      // Display the subtraction result
    cout<<"subtraction:"<<sub<<endl;

      // Display the multiplication result
    cout<<"multiplication:"<<mul<<endl;

        // Display the division result
    cout<<"division:"<<div<<endl;

        // Display the remainder result
    cout<<"remainder:"<<rem<<endl;

    return 0;
    
}