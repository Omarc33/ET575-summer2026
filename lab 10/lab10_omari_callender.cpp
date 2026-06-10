/*
Omari Callender
June 10, 2026
Lab: Loops
*/


#include <iostream>

using namespace std;

int main()
{

    cout<<"\n example 1"<<endl;

    int x=3;
    for(x; x<=5; x++){
        cout<<"Hello"<<x<<endl;
    }
    cout<<"End of for loop.Value of x="<<x<<endl;

    cout<<"\n example 2"<<endl;
    for(int x= 1; x<=9; x+=2){
        cout<<x<<"\t";
    }

    cout<<"\n example 3"<<endl;
    for(int x= 10;x >=-10;x--){
        cout<<x<<"\t";
    }

    cout<<"\n example 4"<<endl;
    
    for(int x=-20; x<= 20 ; x+=4){
    cout<<x<<"\t";

}
cout<<endl;
    cout<<"\n example 5"<<endl;
    int n=1;
    while(n<=5){

    cout<<n<<"\t";
    n++;
    }
    cout<<endl;

    n=1;
    while(n++ <=5){
        cout<<n<<"\t";
    }
    cout<<endl;

    n=1;
    while(++n <=5){

        cout<<n<<"\t";
    }

        cout<<"\n example 6"<<endl;
        int number=0;
        cout<<"Enter a number:"<<endl;
        cin>>number;

        while(!(number>=1 && number <=9)){

            cout<<"Enter a new number between 1 and 9:";
            cin>>number;

               }
            cout<<"Collected number="<<number<<endl;

    cout << "--- Exercise 1/lab 10 ---" << endl;

    int count = 0;

    for (int n = 21; n >= -21; n -= 5)
    {
        cout << n << endl;

        if (n % 2 == 0)
        {
            count++;
        }
    }

    cout << "The number of multiples of 2 is " << count << endl;

    cout << endl;
    cout << "--- Exercise 2/lab 10 ---" << endl;

    int start = 0;

    cout << "Enter the starting value: ";
    cin >> start;

    for (int n = start; n <= 30; n += 4)
    {
        cout << n << endl;
    }

    return 0;
}