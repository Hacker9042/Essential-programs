#include<bits/stdc++.h>
using namespace std;

class employee{
    int id;
    static int count;// also known as class variables. Intializing the value of count here throws an error
    public:
        void setData(void){
            cout<<"enter the Id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the Id of the employee is "<<id<<endl<<"and this is employee number "<<count<<endl;
        }
        static void getCount(void){
            //cout<<id; will throw an error
            cout<<"the value of count is "<<count<<endl;
        }
};

int employee :: count;//count=1000 will not throw an error

int main()
{
    employee a,b,c;

    a.setData();
    a.getData();
    employee::getCount();

    b.setData();
    b.getData();
    employee::getCount();

    c.setData();
    c.getData();
    employee::getCount();
    return 0;
}