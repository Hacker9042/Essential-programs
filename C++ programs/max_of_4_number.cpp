#include<bits/stdc++.h>
using namespace std;
int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int left_max=max(a,b);
    int right_max=max(c,d);
    int result=max(left_max,right_max);
    cout<<result;
    return 0;
}