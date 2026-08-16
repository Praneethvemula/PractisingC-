#include<iostream>
using namespace std;
int main(){

    // Declare integer variables i, j, k, l, and m
    int i,j,k,l,m;

    // Assign values to i and perform increment and decrement operations
    i=7;

    // Pre-increment: Increment i by 1 and assign the new value to j
    j=++i;

    // Post-increment: Assign the current value of i to k and then increment i by 1
    k=i++;

    // Pre-decrement: Decrement i by 1 and assign the new value to l
    l=--i;

    // Post-decrement: Assign the current value of i to m and then decrement i by 1
    m=i--;

    // Display the values of i, j, k, l, and m
    cout<<"i="<<i<<endl;

    // Display the values of j, k, l, and m
    cout<<"j="<<j<<endl;

    // Display the values of k, l, and m
    cout<<"k="<<k<<endl;

    // Display the values of l and m
    cout<<"l="<<l<<endl;

    // Display the value of m
    cout<<"m="<<m<<endl;

    return 0;
}