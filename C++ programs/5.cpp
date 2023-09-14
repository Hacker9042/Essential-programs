#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //constant variables

    const int a=3;// cannot be changed readonly variable
    
    // manipulators in c++
    //1st endl
    int d=3,b=78,c=1233;
    cout<<"the value of a is "<<d<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    //2nd setw()
    cout<<"the value of a is "<<setw(4)<<d<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;

    return 0;
}