#include <iostream>
#include <string>

using namespace std;

// example 3
int dbnumber(int n){
    return n*2;
}

//example 4:function that returns the area of a rectangle
float arearectangle(float width,float length){
    return width * length;

}

//example 5: function that checks if a  is positive , negative, or zero
string checknumber(int number){
    if(number>0)
        return "positive";
    else if(number<0)
        return"negative";
    else
        return "zero";
}

// example 6: composition of functions
// function 1: collect and return a positive
// validate that the number is positive before returning it

int positivenumber(){

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    // recollect n if n is not a positive number
    while(n<=0){
        cout<<"Error! Enter a positive number: ";
        cin>>n;
    }

    return n;
}

// function 2 that calculates the area of a square
int areasquare(int side){
    return side * side;
}

// function 3 print result
void printresult(int area){
    cout<<"The area of a square is "<<area<<endl;
    return;
}

// example 7: function calling function

// function 1: returns the sum of two numbers
int addition(int a, int b){
    return a + b;
}

// function 2: returns the triple of the sum of two numbers
int tripleaddition(){
    return 3 * (addition(2,3));   // function calling function
}

void printhi(){

    cout<<"Hello Function!"<<endl;
    return;
}

void greeting(string username){

    cout<<"Good morning"<<username<<endl;

    return;
} 

// Excerise/lab 13

// function 1: collect a number between 1 and 10
int collectnumber(){

    int num;

    cout<<"Enter a number between 1 and 10: ";
    cin>>num;

    while(num < 1 || num > 10){
        cout<<"Error! Enter a number between 1 and 10: ";
        cin>>num;
    }

    return num;
}

// function 2: print numbers from collected number to 15
void printnumbers(int start){

    for(int i = start; i <= 15; i++){
        cout<<i<<"\t";
    }

    cout<<endl;
    return;
}

// function 3: count numbers that are not multiples of 3
int countnumbers(int start){

    int count = 0;

    for(int i = start; i <= 15; i++){

        if(i % 3 != 0){
            count++;
        }

    }

    return count;
}

// function 4: print result
void printanswer(int start, int total){

    cout<<"From "<<start
        <<" up to 15, there are "
        <<total
        <<" number/s that are not multiplied by 3."
        <<endl;

    return;
}