#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lab16_functions_callender.cpp"

using namespace std;

int main()
{
    srand(time(0));

    // ---------------- Example 1 ----------------
    cout << "\n---- example 1: intro to pointer ----" << endl;
    intropointer();

    // ---------------- Example 2 ----------------
    cout << "\n---- example 2: checking different data ----" << endl;

    string something = "Hello World!";

    a(something);
    cout << something << endl;

    b(something);
    cout << something << endl;

    c(&something);
    a(something);

    // ---------------- Example 3 ----------------
    cout << "\n---- example 3: intro to array ----" << endl;
    introarray();

    // ---------------- Example 4 ----------------
    cout << "\n---- example 4: print each element in an array ----" << endl;

    const int s = 4;
    int age[s] = {18, 21};

    printelements(s, age);

    updatearray(s, age);

    printelements(s, age);

    int adults = countadult(s, age);

    cout << "Adult 21+ = " << adults << endl;

    // =====================================================
    // Exercise A
    // =====================================================

    cout << "\n---- Exercise A ----" << endl;

    int* ptr;              // Declare an integer pointer

    int var = 7;           // Create integer variable var

    int foo = 21;          // Create integer variable foo

    ptr = &var;            // ptr points to var

    ptr = &foo;            // ptr now points to foo

    int& ref = var;        // ref is a reference to var

    cout << "var = " << var << endl;
    cout << "foo = " << foo << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "ref = " << ref << endl;

    // =====================================================
    // Exercise B
    // =====================================================

    cout << "\n---- Exercise B ----" << endl;

    const int SIZE = 10;
    int numbers[SIZE];

    fillArray(SIZE, numbers);

    cout << "Random numbers: ";
    printelements(SIZE, numbers);

    int evenCount = countEvenNumbers(SIZE, numbers);

    cout << "Even numbers = " << evenCount << endl;

    return 0;
}