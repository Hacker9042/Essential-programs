#include<bits/stdc++.h>
using namespace std;

// forward declaration
class complex1;

class calaculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumRealcomplex(complex1,complex1);
        int sumCompcomplex(complex1 o1,complex1 o2);
};

class complex1{
    int a,b;
    // indiviusal declaration of function
    // friend int calaculator ::sumRealcomplex(complex1 o1,complex1 o2);// declaration offreied class
    // friend int calaculator ::sumCompcomplex(complex1 o1,complex1 o2);
    // declaring whole class as friend
    friend class calaculator;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calaculator ::  sumRealcomplex(complex1 o1, complex1 o2){
            return o1.a+o2.a;
        }

int calaculator ::sumCompcomplex(complex1 o1,complex1 o2){
    return o1.b+o2.b;
}

int main()
{
    complex1 o1,o2;
    o1.setNumber(1,4);
    o1.print();

    o2.setNumber(5,6);
    o2.print();

    calaculator calc;
    int res=calc.sumRealcomplex(o1,o2);
    cout<<"the sum of real part is "<<res<<endl;
    int resComp=calc.sumCompcomplex(o1,o2);
    cout<<"the sum of complex part is "<<resComp<<endl;
    return 0;
}