#include<iostream>
using namespace std;

int main(void){

    // Declare an integer variable to store the user's age
    int age;

    // Prompt the user to enter their age
    cout<<"Enter your age:";

    // Read the age entered by the user
    cin>>age;

    // Check if the user is eligible to vote based on their age
    if(age>=18){

        // Display a message indicating that the user is eligible to vote
        cout<<"You are eligible for vote";
    }
    // If the user is not eligible to vote, display a different message
    else{

        // Display a message indicating that the user is not eligible to vote
        cout<<"You are not eligible for vote";
    }
    return 0;
    }