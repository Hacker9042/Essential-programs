#include<bits/stdc++.h>
using namespace std;

class complex1{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        friend complex1 Sumcomplex(complex1 o1, complex1 o2);//it allows compliler to access the private part out of the class
        
        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex1 Sumcomplex(complex1 o1, complex1 o2){// can't be accessed directly i.e. c1.sumcomplex will give error
    complex1 o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    o3.print();
    return o3;
}

int main()
{
    complex1 c1,c2,sum;
    c1.setNumber(1,3);
    c1.print();

    c2.setNumber(4,5);
    c2.print();

    sum=Sumcomplex(c1,c2);

    return 0;
}
// friend function are not the part of the classes or scope of classes
// can be invoked without use of objects
// usually contains arguments as objects
// can be declraed inside public or private parts 
// it cannot access the members directly by their name and needs i.e. by object_name.members_name