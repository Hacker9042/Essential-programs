#include<iostream>
using namespace std;

int main()
{
    //refrence variables concepts 
    float x=455;
    float &y =x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    //typecasting of variables
    int a=45;
    float b=45.56;

    cout<<"the value of a is "<<(float)a;
    cout<<"the value of a is "<<float(a);

    cout<<"the value of b is "<<(int)a;
    cout<<"the value of b is "<<int(a);

    int c = int(b);

    return 0;
}