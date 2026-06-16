#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// example 1
void intropointer()
{
    int age = 25;
    char grade = 'A';
    string name = "Peter";

    int* ptrage = &age;
    char* ptrchar = &grade;
    string* ptrstring = &name;

    cout << ptrage << endl;
    cout << ptrchar << endl;
    cout << ptrstring << endl;

    cout << *ptrage << endl;
    cout << *ptrchar << endl;
    cout << *ptrstring << endl;
}

// example 2
void a(string v)
{
    cout << "A = " << v << endl;
    v = "updated A";
}

void b(string& v)
{
    cout << "B = " << v << endl;
    v = "updated B";
}

void c(string* v)
{
    cout << "C = " << *v << endl;
}

// example 3
void introarray()
{
    int scores[3];

    cout << scores << endl;
    cout << "first element = " << scores[0] << endl;

    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;

    cout << "first element = " << scores[0] << endl;

    char symbols[5] = {'$', '#', '@', '!', 'G'};
    cout << "3rd symbol = " << symbols[2] << endl;

    string names[] = {"Peter", "Annie"};
    cout << "2nd name " << names[1] << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << symbols[i] << endl;
    }

    float avgscore = 0, sumscores = 0;

    for(int i = 0; i < 3; i++)
    {
        sumscores += scores[i];
    }

    avgscore = sumscores / 3.0;

    cout << "The average score is = " << avgscore << endl;
}

// example 4
void printelements(int sizearray, int arr[])
{
    for(int i = 0; i < sizearray; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
}

void updatearray(int sizearray, int* arr)
{
    for(int i = 0; i < sizearray; i++)
    {
        cout << "Enter an age: ";
        cin >> arr[i];
    }
}

int countadult(int sizearray, int* arr)
{
    int counter = 0;

    for(int i = 0; i < sizearray; i++)
    {
        if(arr[i] >= 21)
        {
            counter++;
        }
    }

    return counter;
}

// Exercise B
void fillArray(int sizearray, int arr[])
{
    for(int i = 0; i < sizearray; i++)
    {
        arr[i] = rand() % 9 + 1;
    }
}

int countEvenNumbers(int sizearray, int arr[])
{
    int counter = 0;

    for(int i = 0; i < sizearray; i++)
    {
        if(arr[i] % 2 == 0)
        {
            counter++;
        }
    }

    return counter;
}