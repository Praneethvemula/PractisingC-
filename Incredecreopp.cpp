#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m;
    i=7;
    j=++i;
    k=i++;
    l=--i;
    m=i--;
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
    cout<<"k="<<k<<endl;
    cout<<"l="<<l<<endl;
    cout<<"m="<<m<<endl;
    return 0;
}