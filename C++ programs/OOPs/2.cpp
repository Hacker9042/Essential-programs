#include<bits/stdc++.h>
#include<string>
using namespace std;

class binary{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"enter a binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"entered binary number is in wrong format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones(void){
    chk_bin();// nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
           s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); this will throw an error since chk_bin is private function
    b.ones();
    b.display();
    return 0;
}