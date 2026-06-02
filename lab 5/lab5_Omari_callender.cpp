/*
June 2,2026
Lab 5: string methods
Omari Callender
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n----example 1: string indexing----"<<endl;
    // character within a string is accessible ny usimg an index number
    // index number starts from 0 (left to right) and ends with n-1 (right to left)
    string username ="peterpan123";
    cout<<"The fourth character of username=" <<username[3]<<endl;

    //at() method can be used to access a character in a string
    cout<<"The sixth character of username=" <<username.at(5)<<endl;


    cout<<"n\----example 2: string length----"<<endl;
    //length method shows the number of character in a string including the space
    int num_username= username.length();
    cout<<"There are "<<num_username<<" characters in username."<<endl;


    cout<<"\n---example 3: adding strings---"<<endl;

    //strings can be concatenated or added using the + operator
    string n="Never";
    string m= "Again";
    cout<<n+m<<endl;

    cout<<"\n---example 4: subtracting characters from a string---"<<endl;
    //substr() method extracts characters from a string
    // substr(x,y) --> x = starting index, y = amount of characters to be extracted from index x )

    cout<<"Extarcted word =" <<n.substr(1,4)<<endl;

    cout<<"\n---example 5: instering characters into a string"<<endl;
    //insert() method inserts characters into a string
    //insert(x,y) --> x = index number where the characters will be inserted, y = characters to be inserted
    // from example, insert the word LAND in between the username ="peterLANDpan123"
    
    cout<<username<<endl;//original username

    username.insert(5,"LAND");//inserting the word LAND at index 5

    cout<<"The updated username="<<username<<endl;//updated username

    cout<<"\n---example 6: add character/s to end of a string"<<endl;
    //append() method adds character/s to the end of a string
    //append(x) --> x = character/s to be added to the end of a string
    username.append("END");// automatically adds the word END to the end of the username
    cout<<"The updated username="<<username<<endl;

    cout<<"\n---example 7: replacing characters in a string---"<<endl;
    //replace() method replaces characters in a string
    //replace(x,y,z) --> x = starting index, y = amount of characters to be replaced, z = characters to replace with
    // from example, replace the word LAND with the word ISLAND in the username = "peterISLANDpan123END"
    string name="Peter Pan";
    //replace eter with atrick
    cout<<"Original name =" <<name<<endl;
    name.replace(1,4,"atrick");
    
    cout<<"updated name ="<<name<<endl;

    username.replace(5,4,"ISLAND");
    cout<<"The updated username ="<<username<<endl;

    

    cout<<"\n---example 8: erasing or removing a character in a string---"<<endl;
    //erase() method erases or removes a character in a string
    //erase(x,y) --> x = starting index, y = amount of characters to be removed
    // from example, remove the word ISLAND from the username = "peterpan123END"

    cout<<"Original name =" <<name<<endl;

    name.erase(9,2);

    cout<<"The updated name ="<<name<<endl;

    cout<<"Original username="<<username<<endl;
    username.erase(5,6);//erasing Island from the username
    cout<<"The updated username ="<<username<<endl;

    cout<<"\n---example 9: finding the index of a character in a string---"<<endl;
    //find() method finds the index of a character in a string
    //find(x) --> x = character to be found
    // from example, find the index of the character p in the username = "peterpan123END"
    cout<<"The first index of the character p in the username is ="<<username.find("p")<<endl;
    
    int index_r=username.find("r");
    int index_pan=username.find("pan");
    int index_ISLAND=username.find("ISLAND");

    cout<<"The first index of the word pan in the username is ="<<index_pan<<endl;
    cout<<"The first index of the word ISLAND in the username is ="<<index_ISLAND<<endl;    
    cout<<"The index of letter r is =" <<index_r<<endl;

    cout<<"\n-----Exercise/Lab 5-----"<<endl;
    //declare string variable
    string new_word;

    //collect the word
    cout<<"Type a word: ";
    cin>>new_word;

    //print the 4th character
    cout<<"The 4th character is: "<<new_word[3]<<endl;

    //find and print the length of the word
    cout<<"The length of the word is: "<<new_word.length()<<" characters."<<endl;

    //replace three characters from the second character
    new_word.replace(1,3,"-- $ --");

    //print resulting word
    cout<<"After replacement: "<<new_word<<endl;

    //remove two characters from the end of the message
    new_word.erase(new_word.length()-2,2);

    //print resulting word
    cout<<"After removing two characters from the end: "<<new_word<<endl;
    cout<<"\n-------------------------------"<<endl;
    

    return 0;
}
