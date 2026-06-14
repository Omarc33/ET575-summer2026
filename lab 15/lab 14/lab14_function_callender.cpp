#include <iostream>

using namespace std;

// function to collect and validate marks
int inputMarks(){

    int mark = 0;

    cout<<"Enter mark between 0 and 100: ";
    cin>>mark;

    // recollect if mark is invalid
    while(mark < 0 || mark > 100){
        cout<<"Error! Enter mark between 0 and 100: ";
        cin>>mark;
    }

    return mark;
}

// function to calculate total marks
int totalMarks(int m1, int m2, int m3){

    return m1 + m2 + m3;
}

// function calling function to calculate percentage
float calculatePercentage(int m1, int m2, int m3){

    int total = totalMarks(m1, m2, m3);

    float percentage = (total / 300.0) * 100;

    return percentage;
}

// function to determine letter grade
char determineGrade(float percentage){

    if(percentage >= 90 && percentage <= 100)
        return 'A';
    else if(percentage >= 80 && percentage < 90)
        return 'B';
    else if(percentage >= 70 && percentage < 80)
        return 'C';
    else if(percentage >= 60 && percentage < 70)
        return 'D';
    else
        return 'F';
}

// function to display result
void displayResult(int m1, int m2, int m3, float percentage, char grade){

    cout<<"With marks "
        <<m1<<", "
        <<m2<<", "
        <<m3
        <<", the percentage is "
        <<percentage
        <<"% and the GRADE is "
        <<grade
        <<endl;

    return;
}