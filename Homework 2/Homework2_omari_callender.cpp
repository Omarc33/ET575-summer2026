/*
Omari Callender

Homework 2: Loops mechanism
*/

#include <iostream>

using namespace std;

// global variable for Question 3
const int dimension = 10;

int main(){

    // ---------------- Question 1 ----------------
    cout<<"\n----- Question 1 -----"<<endl;

    int number = 0;

    do{

        cout<<"Enter a number greater than or equal to 10: ";
        cin>>number;

        if(number < 10){
            cout<<number<<" is invalid. Enter a number greater than or equal to 10."<<endl;
        }

    }while(number < 10);

    cout<<number<<" is a valid number!"<<endl;


    // ---------------- Question 2 ----------------
    cout<<"\n----- Question 2 -----"<<endl;

    int number1 = 0;
    int number2 = 0;
    int minimum = 0;
    int maximum = 0;

    cout<<"Enter number 1: ";
    cin>>number1;

    cout<<"Enter number 2: ";
    cin>>number2;

    if(number1 < number2){
        minimum = number1;
        maximum = number2;
    }
    else{
        minimum = number2;
        maximum = number1;
    }

    cout<<"RESULT = ";

    while(minimum <= maximum){

        cout<<minimum<<" ";

        minimum++;
    }

    cout<<endl;


    // ---------------- Question 3 ----------------
    cout<<"\n----- Question 3 -----"<<endl;

    for(int row = 1; row <= dimension; row++){

        for(int col = 1; col <= dimension; col++){

            if( (row == 3 && (col == 4 || col == 6)) ||
                (row == 4 && (col == 3 || col == 4 || col == 6 || col == 7)) ||
                (row == 5 && (col == 3 || col == 4 || col == 5 || col == 6 || col == 7)) ||
                (row == 6 && (col == 4 || col == 5 || col == 6)) ||
                (row == 7 && (col == 5)) )
            {
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }

        }

        cout<<endl;
    }

    return 0;
}