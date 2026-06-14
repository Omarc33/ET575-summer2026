/*
Omari Callender
Lab 14
Function Calling Function
*/

#include <iostream>

#include "lab14_function_callender.cpp"

using namespace std;

int main(){

    cout<<"\n----- Lab 14: Function Calling Function -----"<<endl;

    // collect marks
    int mark1 = inputMarks();
    int mark2 = inputMarks();
    int mark3 = inputMarks();

    // calculate percentage
    float percentage = calculatePercentage(mark1, mark2, mark3);

    // determine grade
    char grade = determineGrade(percentage);

    // display final result
    displayResult(mark1, mark2, mark3, percentage, grade);

    return 0;
}