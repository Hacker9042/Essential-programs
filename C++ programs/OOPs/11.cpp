// constructer in cpp
#include<bits/stdc++.h>
using namespace std;

class comp{
    int a,b;
    public:
        comp(void);
        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

comp:: comp(void){
    a=10;
    b=0;
}

int main()
{
    comp c;
    c.print();
    
    return 0;
}