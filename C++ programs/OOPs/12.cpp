#include<bits/stdc++.h>
using namespace std;

class comp{
    int a,b;
    public:
        comp(int, int);
        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

comp:: comp(int x, int y){
    a=x;
    b=y;
}

int main()
{
    comp a(4,6);// implict call
    a.print();
    comp b=comp(5,7);// explicit call
    b.print();
    return 0;
}