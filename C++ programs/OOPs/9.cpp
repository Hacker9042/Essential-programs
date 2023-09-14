#include<bits/stdc++.h>
using namespace std;

class Y;
class X{
    int num;
    public:
        void Setvalue(int value){
            num=value;
        }
    friend void add(X,Y);
};

class Y{
    int data;
    public: 
        void Setvalue(int value){
            data=value;
        }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"the value of the X and Y are: "<<o1.num+o2.data<<endl;
}

int main()
{
    X a;
    a.Setvalue(3);

    Y b;
    b.Setvalue(5);

    add(a,b);
    return 0;
}