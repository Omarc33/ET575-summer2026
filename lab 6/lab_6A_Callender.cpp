#include <iostream>
#include <string>

using namespace std;

int main() {
    string new_word;

    cout << "Type a word: ";
    cin >> new_word;

    if(new_word.length() >= 4){
        cout << "The 4th character is: " << new_word.at(3) << endl;
    }

    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    string modified_word = new_word;

    modified_word.replace(1,3,"-- $ --");
    cout << "After replacement: " << modified_word << endl;

    modified_word.erase(modified_word.length()-2);
    cout << "After removing two characters from the end: " << modified_word << endl;

    return 0;
}

/*
--- AI Assistant Used: ChatGPT ---
Q1) Was the code correct?
Mostly yes, the code worked and gave the correct output. It asked the user to type a word, printed the 4th character, showed the length, replaced three characters starting from the second character, and removed two characters from the end.However, it forgot the exercise part and the bottom line.

Q2) Was it readable and properly commented?
The code was readable because it followed the same order as the assignment instructions. It was easy to understand, although it did not include many comments explaining the string methods.
Q3) Were you able to explain each line of code?
Yes, I was able to explain most of it. I understood the input and output lines, the string variable, and the string methods. The only part that took more attention was remembering that the 4th character is index 3 because counting starts at 0.

Q4) Did it use the same programming concepts we learned in class?
Mostly yes. It used string variables, cin, cout, .at(), .length(), .replace(), and .erase(), which were covered in class. It also used an if statement and a second string variable, which made the code a little more advanced than the examples we practiced.
Q5) Terminal Output:
Type a word: terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: t-- $ --inal
After removing two characters from the end: t-- $ --in
*/