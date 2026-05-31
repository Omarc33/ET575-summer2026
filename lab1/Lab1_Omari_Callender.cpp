/*
My full name
May 28 2026
Lab 1:iostream
*/

#include<iostream>


using namespace std;

int main(){
    // Example 1: Using cout to display output
    
    cout<<"\n-------Example 1: cout object ------"<<endl;

    cout<<"Hello World!\n"<<endl;

    cout<<"ET 575 \t\t Omari Callender"<<endl;

    // Example 2: Declaring and using a string variable

    cout<<"\n------- Example 2: declaring string and character variables -----"<<endl;
    
    string username;
    username="Omarplum";

    cout<<"U="<<username<<endl;

    // Ask the user to enter a new username

    cout<<"Enter another username:";

    cin>>username;

    // Display the updated username
    cout<<"updated username:"<<username<<endl;

    // Example 3: Declaring and using a character variable

    cout<<"\n------ Example 3: declaring character variable------"<<endl;

    char symbol = '%'; // Declare and initialize a character variable

    cout<<"character ="<<symbol<<endl;

    symbol= 64; // Assign ASCII value 64 (@) to the character
    cout<<"updated character= "<<symbol<<endl;

    cout<<"\n----- EXERCISE-----"<<endl;
    // Declare variables
    string country;
    char gender;

    // User input
    cout<<"Enter a country: ";
    getline(cin>> ws,country);

    cout<<"Enter gender (f = female, m = male, o = others): ";
    cin>>gender;

    // Output
    cout<<"\nEntered country:\t"<<country<<endl;
    cout<<"Selected gender:\t"<<gender<<endl;
    
    return 0;
}
