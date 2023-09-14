#include<bits/stdc++.h>
using namespace std;

class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void Getdata()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee abhishek;
    abhishek.d=34;
    abhishek.e=89;
    abhishek.setdata(1,2,4);
    abhishek.Getdata();   
    return 0;
}