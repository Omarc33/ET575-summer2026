/*
Omari Callender
June 14,2026
Homework 2: Loops mechanism
*/

#include <iostream>

using namespace std;

// global variable for Question 3
const int dimension = 10;

int main(){

    // ---------------- Question 1 ----------------

    cout<<"\n----- Question 1 -----"<<endl;

    // declare variable
    int number = 0;

    // recollect until user enters a valid number
    do{

        cout<<"Enter a number greater than or equal to 10: ";
        cin>>number;

        if(number < 10){
            cout<<number<<" is invalid. Enter a number greater than or equal to 10."<<endl;
        }

    }while(number < 10);

    // display valid number
    cout<<number<<" is a valid number!"<<endl;


    // ---------------- Question 2 ----------------

    cout<<"\n----- Question 2 -----"<<endl;

    // declare variables
    int number1 = 0;
    int number2 = 0;
    int minimum = 0;
    int maximum = 0;

    // collect two numbers
    cout<<"Enter number 1: ";
    cin>>number1;

    cout<<"Enter number 2: ";
    cin>>number2;

    // determine minimum and maximum
    if(number1 < number2){
        minimum = number1;
        maximum = number2;
    }
    else{
        minimum = number2;
        maximum = number1;
    }

    // print result
    cout<<"RESULT = ";

    // print numbers from minimum to maximum
    while(minimum <= maximum){

        cout<<minimum<<" ";

        minimum++;
    }

    cout<<endl;


    // ---------------- Question 3 ----------------

    cout<<"\n----- Question 3 -----"<<endl;

    // nested loop to graph the heart
    for(int row = 1; row <= dimension; row++){

        for(int col = 1; col <= dimension; col++){

            // print % in heart positions
            if( (row == 3 && (col == 4 || col == 6)) ||
                (row == 4 && (col == 3 || col == 4 || col == 6 || col == 7)) ||
                (row == 5 && (col == 3 || col == 4 || col == 5 || col == 6 || col == 7)) ||
                (row == 6 && (col == 4 || col == 5 || col == 6)) ||
                (row == 7 && (col == 5)) )
            {
                cout<<" % ";
            }

            // print dots elsewhere
            else{
                cout<<" . ";
            }

        }

        // move to next row
        cout<<endl;
    }

    return 0;
}