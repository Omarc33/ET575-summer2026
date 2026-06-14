#include <iostream>
#include "lab13_function_callender.cpp"


using namespace std;

int main(){
cout<<"\n example 1:void functions"<<endl;
printhi();

cout <<"\nexample 2: void function with arguements"<<endl;

greeting("Peter");
string user= "Annie";
greeting(user);

cout<<"\nexample 3: functions that return a value"<<endl;
int x= dbnumber(6);
cout<<x<<endl;

cout<<"\n----- example 4: function that returns the area of a rectangle "<<endl;

float a = arearectangle(2.5, 2);

cout<<"Area rectangle = "<<a<<endl;

cout<<"\n----- example 5: function with alternative return value -----"<<endl;

string r = checknumber(0);

cout<<r<<endl;

cout<<"\n----- example 6: composition of functions -----"<<endl;

int side = positivenumber();

int asquare = areasquare(side);

printresult(asquare);

cout<<"\n----- example 7: function calling function -----"<<endl;

cout<<tripleaddition()<<endl;

cout<<"\nExcerise/lab 13"<<endl;
int number = collectnumber();

printnumbers(number);

int total = countnumbers(number);

printanswer(number, total);

return 0;
    return 0;
}