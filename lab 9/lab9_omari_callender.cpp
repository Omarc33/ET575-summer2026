/*
Omari Callender
june 4, 2026
lab 9: switch-case statement
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n---example 1: switch-case statement"<<endl;
    //ask the user to select a day-off(number)
    //declare variables
    int dayoff=0;

    //collect dayoff
    cout<<"select a day-of:"<<endl;
    cout<<"1 for Monday:"<<endl;
    cout<<"2 for Tuesday:"<<endl;
    cout<<"3 for Wednesday:"<<endl;
    cout<<"4 for Thursday:"<<endl;
    cout<<"5 for Friday:"<<endl;
    
    
    cin>>dayoff;

    //switch-case statement
    switch(dayoff){
        case 1:
            cout<<"you are off Monday"<<endl;
            break;
        case 2:
            cout<<"you are off Tuesday"<<endl;
            break;
        case 3:
            cout<<"you are off Wednesday"<<endl;
            break;
        case 4:
            cout<<"you are off Thursday"<<endl;
            break;
        case 5:
            cout<<"you are off Friday"<<endl;
            break;
        
        default:
            cout<<"wrong dayoff"<<endl;
            break;

    }

    cout<<"\n---example 2:select a gender:"<<endl;
    //select gender using character
    //declare variables
    char gender;
    string selectedgender="";

    //collect gender
    cout<<"select a gender:"<<endl;
    cout<<"m for male"<<endl;
    cout<<"f for female"<<endl;
    cout<<"o for other"<<endl;
    cin>>gender;


    //switch-case statement
    switch(gender)
    {
        case 'm': case 'M':
            selectedgender="Male";
            break;
        case 'f': case 'F':
            selectedgender="Female";
            break;
        case 'o': case 'O':
            selectedgender="Other";
            break;
        default:
            break;
    }
    //print result
    cout<<"selected gender = " <<selectedgender<<endl;

    cout<<"\n____Exercise/Lab 9____"<<endl;

    
    return 0;
}