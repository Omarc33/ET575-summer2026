/*
Omari Callender
June 1,2026
Lab 4:numerical operators
*/
#include <iostream>

using namespace std;

int main(){
    cout<<"\n----Example 1: assignment operator----"<<endl;
    int n= 9,m=2;
    cout<<"n= "<<n<<endl;

    //add 1 to n and update the value
    n++;
    cout<<"updated n= "<<n<<endl;

    // subtract 1 from m and update the value
    m--;
    cout<<"update m= "<<m<<endl;

    // add m into n and updated value of n
    n+= m;
    cout<<"updated n= "<<n<<endl;
    
    //triple the value of m and update m
    m*=3; // m=m*3;
    cout<<"updated m ="<<m<<endl;

    //modulud: find and return the remainder of a division
    cout<<"Modulus, Remainder = "<<n%m<<endl;
    cout<<"n = "<<n<<endl;
    n%= m;
    cout<<"n "<<n<<endl;

    cout<<"\n-----example 2: comparison operators "<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"Are n and m equal?  "<<(n==m)<<endl;
    cout<<"Is n not equal to m? "<<(n !=m)<<endl;
    cout<<"Is m greater than or equal to n? "<<(m >=n)<<endl;

     cout<<"\n ---example 3: logical operators/boolean operators"<<endl;
     // AND operator, &&, returns a TRUE only if ALL statements are true
     // OR operator, ||. returns a True one of the statements is true
     // NOT or INVERTER operator, ! returns a True for a FALSE, or FALSE for a TRUE
     bool check1= m < n;
     bool check2 = n <= m;
     bool check3 = m != n;

     cout<<"check1 = "<<check1<<endl;
     cout<<"check2 ="<<check2<<endl;
     cout<<"check3 ="<<check3<<endl;

     bool result1 = check1 && check2 && check3;// false && true && true = false
     bool result2 = check1 || check2 || check3;// false || true|| true= true
     bool result3 = ! check2;// ! true= false

     cout<<"result 1 = "<<result1<<endl;
     cout<<"result 2 =" <<result2<<endl;
     cout<<"result 3 ="<<result3<<endl;

     cout<<"\n----Exercise/lab 4------"<<endl;
     // declare variables: number and character
     int number = 0;
     char character;

     cout<<"Enter a character: ";
     cin>>character;

     // collect the values for the character and the number
     cout<<"Enter a number: ";
     cin>>number;

     //triple the number (use assignment operator)
     number*=3; // number= number*3;
     //print result 
     cout<<"Triple the number is: "<<number<<endl;

     //remainder of character divided by 60(use assignment operator)
     character %= 60;
     //print result
     cout<<"Remainder of character is: "<<int(character)<<endl;
     //is number less than or equal to character?(use comparison operator)
     cout<<"Is number less than or equal to character?: "<<(number <= character)<<endl;
     
     // is number less than or equal to -1 OR character not equal to 5?
     cout<<"is number less than or equal to -1 OR character not equal to 5?: "<<(number <= -1 || character != 5)<<endl;

     //is number between -2 and 2?(use comparison and boolean operator)
     cout<<"is number between -2 and 2?: "<<(number >= -2 && number <= 2)<<endl;
    
     return 0;
}