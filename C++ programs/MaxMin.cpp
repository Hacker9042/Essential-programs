#include<bits/stdc++.h>
using namespace std;

int GetMax(int a[], int n){
    int max= INT_MIN;
    for(int i=0; i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int GetMin(int a[], int n){
    int min= INT_MAX;
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}


int main()
{
    int a[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<GetMax(a,size)<<endl;
    cout<<GetMin(a,size)<<endl;
    return 0;
}