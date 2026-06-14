#include <iostream>

using namespace std;

int main(){

    cout<<"\n Example 1: nested while loop"<<endl;

    int i=0;
    while (i++ <3){
        cout<<"Outer loop = "<<i<<endl;

        cout<<"\t\t INNER loop"<<endl;
        int j =0;

        while (j++ < 5){
            cout<<"\t"<<j;
        }

        cout<<endl;
    }

    cout<<"\n example 2: nested while loop"<<endl;

    int row=0, seats=0;

    cout<<"Enter the number of rows: ";
    cin>>row;

    cout<<"Enter the number of seats per row: ";
    cin>>seats;

    for(int r = 1; r <= row; r++){
        for(int c = 1; c <= seats; c++){
            cout<<"Row "<<r<<" seat "<<c<<"\t";
        }

        cout<<endl;
    }

    cout<<"\n---- example 3: graphing using nested loops ----- "<<endl;

    const int GRAPHSIZE = 9;

    for(int row = 1; row<=GRAPHSIZE; row++){
        for(int col = 1; col <= GRAPHSIZE; col++){

            if(col==5 || row==5)
                cout<<" x ";
            else
                cout<<" . ";
        }

        cout<<endl;
    }

    cout<<"\n---- example 4: graphing H using nested loops ----- "<<endl;

    int dimension = 10;

    for(int row = 1; row<=dimension; row++){
        for(int col = 1; col<=dimension; col++){

            if( (row>=3 && row<=8 && col>=3 && col<=4) ||
                (row>=5 && row<=6 && col>=5 && col<=6) ||
                (row>=3 && row<=8 && col>=7 && col<=8)
            )
                cout<<" % ";
            else
                cout<<" . ";
        }

        cout<<endl;
    }

    cout<<"\nExcerise/lab 12"<<endl;

    cout<<"\nExercise A: guessing game"<<endl;

    const int GUESS = 5;
    int number = 0;

    cout<<"Enter a number between 1 and 10: ";
    cin>>number;

    while(number < 1 || number > 10){
        cout<<"Enter a valid number between 1 and 10: ";
        cin>>number;
    }

    while(number != GUESS){

        if(number > GUESS){
            cout<<"The entered number is high."<<endl;
        }
        else{
            cout<<"The entered number is low."<<endl;
        }

        cout<<"Enter another number between 1 and 10: ";
        cin>>number;

        while(number < 1 || number > 10){
            cout<<"Enter a valid number between 1 and 10: ";
            cin>>number;
        }
    }

    cout<<"The entered number is correct."<<endl;

    cout<<"\nExercise B: 10 by 10 graph"<<endl;

    int size = 10;
    
    for(int row = 1; row <= size; row++){
    for(int col = 1; col <= size; col++){

        if( (row>=3 && row<=8 && col>=3 && col<=4) ||
            (row>=3 && row<=8 && col>=7 && col<=8) ||
            (row>=6 && row<=7 && col>=5 && col<=6) ||
            (row>=8 && row<=10 && col>=5 && col<=6) )
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