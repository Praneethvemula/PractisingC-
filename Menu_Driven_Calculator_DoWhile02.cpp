#include<iostream>
using namespace std;

int main(){
    int choice;
    float a,b,result;

    do{
        //Display Calculator Menu
        cout<<"\n===== CALCULATOR ====="<<endl;
        cout<<"1.addition"<<endl;
        cout<<"2.Substraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;

        //Ask the user to enter the choice
        cout<<"Enter your Choice(1-5):";
        cin>>choice;

        //Perform operation based on the user's choice
        if(choice >= 1 && choice <= 4){
            cout<<"Enter first Number:";
            cin>>a;

            cout<<"Enter second number:";
            cin>>b;

        }
        if(choice == 1){
            result = a + b;
            cout<<"The result of addition is:"<<result<<endl;
        }
        else if(choice == 2){
            result = a - b;
            cout<<"The result of substraction is:"<<result<<endl;
        }
        else if(choice == 3){
            result = a * b;
            cout<<"The result of multiplication is:"<<result<<endl;
        }
        else if(choice == 4){
            if(b != 0){
                result = a / b;
                cout<<"The result of division is:"<<result<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
        }
        else if(choice == 5){
            cout<<"Exiting the calculator. Goodbye!"<<endl;
        }
        else{
            cout<<"Invalid choice! Please try again."<<endl;
        }
    }while(choice != 5);  // Repeat until the user chooses Exit
return 0;
}