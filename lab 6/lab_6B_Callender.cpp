#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "------------------------------- EXERCISE -------------------------------\n";

    string new_word;
    cout << "Type a word: ";
    cin >> new_word;

    // Print the 4th character (index 3)
    cout << "The 4th character is: " << new_word[3] << endl;

    // Print the length
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    // Replace 3 characters starting from index 1 with "-- $ --"
    string replaced = new_word;
    replaced.replace(1, 3, "-- $ --");
    cout << "After replacement: " << replaced << endl;

    // Remove last 2 characters
    string shortened = replaced;
    shortened.erase(shortened.length() - 2, 2);
    cout << "After removing two characters from the end: " << shortened << endl;

    cout << "---------------------------------------------------------------------------\n";

    return 0;
}
/*
--- AI Assistant Used: Microsoft Copilot ---

Q1) Was the code correct?
Yes. The code worked correctly and produced the expected output. It displayed the 4th character of the word, found the length of the word, replaced three characters starting from the second character, and removed the last two characters from the updated word.

Q2) Was it readable and properly commented?
Yes. The code was easy to follow because the steps were organized in the same order as the assignment instructions. It also included comments explaining the replacement and erase operations. However, it did not explain every line of code, so some beginner students may still need additional comments.

Q3) Were you able to explain each line of code?
Mostly yes. I understood the input and output statements, string indexing, the length() method, and the replace() and erase() methods. I also understood why Copilot created additional string variables named "replaced" and "shortened" instead of modifying the original string directly.

Q4) Did it use the same programming concepts we learned in class?
Mostly yes. The code used concepts covered in class such as string variables, string indexing using [], length(), replace(), erase(), cin, and cout. One difference is that Copilot created additional string variables to store intermediate results, while the class examples usually modified the original string directly. Although I understood the approach, it was slightly different from the examples completed in class.

Q5) Terminal Output:
------------------------------- EXERCISE -------------------------------
Type a word: terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: t-- $ --inal
After removing two characters from the end: t-- $ --in
---------------------------------------------------------------------------
*/