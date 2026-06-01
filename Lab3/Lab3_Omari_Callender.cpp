#include <iostream>

using namespace std;

int main(){
    cout<<"\n----example 1: numerical variables----"<<endl;
    //int,short, or long data type omly takes the whole number
    int number= 5.9;
    cout<<"The number is = "<<number<<endl;
    //float or double data takes the number as it is, the whole number with the  decimal numbers.
    double number1= 3.1233456789;
    float number2= 9.123456789;
    cout<<"The double data type = "<<number1<<endl;
    cout<<"The float data type = "<<number2<<endl;

    cout<<"\n----example 2: constant variables----"<<endl;
    number=23.65;
    cout<<"The updated number = " <<number<<endl;
    //constant variables value CAN'T be changed
    const float EXP=2.718;
    cout<<"The value of EXP = "<<EXP<<endl;

    cout<<"\n----example 3: calculate the height of a falling object---"<<endl;
    //declare the variables
    const float GRAVITY =9.8;
    float time=0,height=0;

    //collect the time
    cout<<"Enter the falling time: ";

    cin>>time;

    //calculate the height of a falling object = 0.5*g*time
    height = 0.5*GRAVITY*time*time;

    //print result
    cout<<"The height of a falling object at "<<time<<" is "<<height<<" meters."<<endl;

    cout<<"\n----example 4: calculate the circumference of a circle -----"<<endl;
    //formula circumference= 2*radius*pi
    //declare variable
    const float PI= 3.14159;
    float circumference =0, radius =0;

    //collect the radius
    cout<<"Enter the radius: ";
    cin>>radius;

    //calculate the circumference
    circumference = 2*radius*PI;

    //print result 
    cout<<"The circumference is= "<<circumference<<endl;

    return 0;
}