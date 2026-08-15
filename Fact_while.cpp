#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int factorial = 1;

    cout<<"Enter a Value of n:";
    cin>>n;

    while(i<=n){
        factorial = factorial * i;
        i++;

    }
cout<<"The factorial of n is:"<<factorial<<endl;
return 0;
}