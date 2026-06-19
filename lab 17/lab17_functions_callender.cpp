/*
Omari Callender
June 19, 2026
lab 17, array application
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// example 1: search application
void filluparray(int *arr, int &numberuserindex, int sizearray)
{
    int number, index = 0;

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;

        if(number > 0)
        {
            arr[index] = number;
            index++;
        }

    }while(number > 0 && index < sizearray);

    numberuserindex = index;
}

void printelements(int *arr, int &numberuserindex)
{
    for(int i = 0; i < numberuserindex; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
}

int search(int *arr, int &numberuserindex, int targetnumber)
{
    int index = 0;
    bool found = false;

    while(!found && (index < numberuserindex))
    {
        if(targetnumber == arr[index])
            found = true;
        else
            index++;
    }

    if(found)
        return index;
    else
        return -1;
}

// example 2: 2d array
void intro2darray()
{
    int graylevel[255][10];

    int temperature[2][5] = {
        {78, 56, 60},
        {100, 89, 92, 90, 80}
    };

    cout << "The temperature in 1st row, 2nd column " << temperature[0][1] << endl;
}

// example 3: print each value in a 2d array
void printarray(int arr[][3], int rows)
{
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << arr[r][c] << "\t";
        }

        cout << endl;
    }
}

// example 4: 2d array application
void studentaverage(int (*arr)[4], int sizestudents, int sizesubjects, int *avg)
{
    int index = 0;

    for(int r = 0; r < sizestudents; r++)
    {
        int sum = 0;

        for(int c = 0; c < sizesubjects; c++)
        {
            sum += arr[r][c];
        }

        avg[index] = sum / sizesubjects;
        index++;
    }
}

void printavg(int *avg, int sizestudents)
{
    for(int i = 0; i < sizestudents; i++)
    {
        cout << "Student " << i + 1 << " average grade = " << avg[i] << endl;
    }
}

// Exercise A
int findMin(int *arr, int sizearray)
{
    int minimum = arr[0];

    for(int i = 1; i < sizearray; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

// Exercise B
void populateArray2D(int arr[][5])
{
    for(int r = 0; r < 5; r++)
    {
        for(int c = 0; c < 5; c++)
        {
            arr[r][c] = rand() % 255 + 1;
        }
    }
}

int range2D(int arr[][5], int min, int max)
{
    int count = 0;

    for(int r = 0; r < 5; r++)
    {
        for(int c = 0; c < 5; c++)
        {
            if(arr[r][c] >= min && arr[r][c] <= max)
            {
                count++;
            }
        }
    }

    return count;
}