/*
Omari Callender
June 19, 2026
lab 17, array application
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lab17_functions_callender.cpp"

using namespace std;

const int ARRAY_SIZE = 5;

int main()
{
    srand(time(0));

    // declare size of the array
    const int sizea = 10;

    // declare the array
    int a[sizea] = {0};

    // declare the variable to save the index of the last collected number
    int listsize;

    // declare the target number
    int targetnumber = 10;

    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);

    int foundindex = search(a, listsize, targetnumber);
    cout << "Index of found number: " << foundindex << endl;

    cout << "\n---- example 2: 2d array" << endl;
    intro2darray();

    cout << "\n---- example 3: print 2d array elements" << endl;

    const int rowsize = 2;

    int n[rowsize][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printarray(n, rowsize);

    cout << "\n---- example 4: 2d array application" << endl;

    const int students = 3;
    const int subjects = 4;

    int grades[students][subjects] = {
        {85, 90, 78, 92},
        {70, 88, 84, 76},
        {95, 91, 89, 93}
    };

    int studentavg[students];

    studentaverage(grades, students, subjects, studentavg);
    printavg(studentavg, students);

    cout << "\n---- Exercise A ----" << endl;

    int minNumber = findMin(a, listsize);

    cout << "The minimum number is " << minNumber << endl;

    cout << "\n---- Exercise B ----" << endl;

    int arrayNumber2D[ARRAY_SIZE][ARRAY_SIZE] = {0};

    int max = 200;
    int min = 150;

    populateArray2D(arrayNumber2D);

    int totalNumber = range2D(arrayNumber2D, min, max);

    cout << "\nArray has " << totalNumber << " number(s) between " << min << " and " << max << endl;

    return 0;
}