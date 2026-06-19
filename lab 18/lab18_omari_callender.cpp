/*
Omari Callender
June 19, 2026
lab 18, console failure and file streaming
*/

#include <iostream>
#include "lab18_functions_callender.cpp"

using namespace std;

int main()
{
    cout << "\n---- example 1: console failure test" << endl;
    checknumber();

    cout << "\n---- example 2: console failure test" << endl;
    float n = validatenumber();
    cout << n << endl;

    cout << "\n---- example 3: read file" << endl;
    iofiles();

    cout << "\n---- example 4: write file" << endl;
    writefile();

    cout << "\n---- example 5: append data into a file" << endl;
    string filename = "outputfile.txt";
    appendfile(filename);

    cout << "\n---- exercise 1: calculator operation" << endl;
    int num1 = 10, num2 = 3;
    int result = calculate(num1, num2);
    cout << "Result = " << result << endl;

    cout << "\n---- exercise 2: file handling" << endl;
    createfile();

    string message = "This line was appended to the file.\n";
    appendmessage(message);

    string newfilename = "new_output.txt";
    string text = "This text overwrites the new file.\n";
    overwritefile(newfilename, text);

    return 0;
}