#include<bits/stdc++.h>
using namespace std;

class c2;
class c1{
    int cval1;
    friend void swap(c1 &, c2 &);
    public:
        void setData(int value){
            cval1=value;
        }
        void display(){
            cout<<cval1<<endl;
        }

};

class c2{
    int cval2;
    friend void swap(c1 &, c2 &);
    public:
        void setData(int value){
            cval2=value;
        }
        void display(){
            cout<<cval2<<endl;
        }
};

void swap(c1 &x, c2 &y){
    int temp= x.cval1;
    x.cval1=y.cval2;
    y.cval2=temp;

}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setData(67);
    cout<<"the value of c1 is ";  

    oc2.setData(35);
    swap(oc1, oc2);


    return 0;
}