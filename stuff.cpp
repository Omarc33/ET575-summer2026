#include <iostream>

using namespace std;

int main(){
    int n =1,m=5;
    string reply;
    
    cout<<"\n What is happening: "<<endl;
    
    cin>>reply;

    cout<<" Your reply is : "<<reply<<endl;
    m+=n ;
    cout<<"n is :"<<n<<endl;
    cout<<"m is :"<<m<<endl;


    cout<<"is n > m :"<<(n>m)<<endl;
    
    string y= "james";
    cout<<"updated y:"<<y.substr(1,4)<<endl;

    int number=0;
    while (number<1||number>10){
        cout<<"enter again";
        cin>>number;
    }

    
    
    
    return 0;
}





