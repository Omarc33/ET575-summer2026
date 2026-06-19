/*
Omari Callender
June 19, 2026
lab 18, console failure and file streaming
*/

#include <iostream>
#include <fstream>

using namespace std;

// function to check if a proper data type is collected for an integer
void checknumber()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(cin.fail())
    {
        cout << "Error! Dismatched data type!" << endl;
    }
    else
    {
        cout << "Entered number = " << num << endl;
    }

    // reset the cin status
    cin.clear();
    cin.ignore(10000, '\n');

    cout << "--- END OF FUNCTION ---" << endl;
}

// example 2: validate a data type
float validatenumber()
{
    float n;

    do
    {
        cout << "Enter a number: ";
        cin >> n;

        if(cin.fail())
        {
            cout << "Invalid data type!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else
        {
            break;
        }

    }while(true);

    return n;
}

// example 3: input and output files
void iofiles()
{
    // declare the objects to handle files
    // input file object 'fin'
    ifstream fin;

    // output file object 'fout'
    ofstream fout;

    // read file 'samplefile.txt'
    // use the 'fin' object along with the 'open' method to open the txt file
    fin.open("samplefile.txt");

    // declare a variable 'line' to temporary store each line of 'samplefile.txt'
    string line;

    int linecounter = 1;

    while(getline(fin, line))
    {
        cout << "Line " << linecounter << " = \t" << line << endl;
        linecounter++;
    }

    // close the file
    fin.close();
}

// example 4: write file
void writefile()
{
    // output file object 'fout'
    ofstream fout;

    fout.open("outputfile.txt");

    fout << "Good Morning!" << endl;

    for(int n = 3; n > 0; n--)
    {
        fout << n << endl;
    }

    fout << "End of file" << endl;

    fout.close();
}

// example 5: appending data to an existing file
void appendfile(string filename)
{
    // output file object 'fout'
    ofstream fout;

    fout.open(filename, ios::app);

    fout << "Student's full name" << endl;

    fout.close();
}

// exercise 1
int calculate(int num1, int num2)
{
    char operation;
    bool valid = false;
    int result = 0;

    do
    {
        cout << "Enter operation (+, -, *, /, %): ";
        cin >> operation;

        if(cin.fail())
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if(operation == '+')
        {
            result = num1 + num2;
            valid = true;
        }
        else if(operation == '-')
        {
            result = num1 - num2;
            valid = true;
        }
        else if(operation == '*')
        {
            result = num1 * num2;
            valid = true;
        }
        else if(operation == '/')
        {
            result = num1 / num2;
            valid = true;
        }
        else if(operation == '%')
        {
            result = num1 % num2;
            valid = true;
        }
        else
        {
            cout << "Incorrect symbol!" << endl;
        }

    }while(!valid);

    return result;
}

// exercise 2
void createfile()
{
    ofstream fout;

    fout.open("data_user.txt");

    fout << "This is my output file - Omari Callender.\n";

    fout.close();
}

void appendmessage(string message)
{
    ofstream fout;

    fout.open("data_user.txt", ios::app);

    fout << message;

    fout.close();
}

void overwritefile(string filename, string text)
{
    ofstream fout;

    fout.open(filename);

    fout << text;

    fout.close();
}