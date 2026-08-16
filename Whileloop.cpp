#include<iostream>
using namespace std;
int main(){

    // Declare integer variables n, i, and sum
    int n,i=1,sum=0;

    // Prompt the user to enter a value for n
    cout<<"Enter value of n: ";

    // Read the value entered by the user and store it in n
    cin>>n;

    // Use a while loop to calculate the sum of numbers from 1 to n
    while(i<=n){

        // Add the current value of i to sum
        sum = sum + i;

        // Increase i by 1 (i = i + 1)
        i++;

    }

    // Display the calculated sum
    cout<<"The sum is:"<<sum<<endl;
    
    return 0;
}