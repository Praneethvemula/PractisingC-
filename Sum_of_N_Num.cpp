#include<iostream>
using namespace std;

int main(){

    // n stores the user's number
    // sum stores the total, initially 0
    int i,n,sum=0;

    // Asks the user to enter a number
    cout<<"Enter the value of n: ";

    cin>>n;

    // for loop starts from 1 and continues until i reaches n
    for(i=1;i<=n;i++){

        // Add the current value of i to sum
        sum=sum+i;
    }
    // Display the final sum
    cout<<"Sum = "<<sum<<endl;
    
    return 0;
}