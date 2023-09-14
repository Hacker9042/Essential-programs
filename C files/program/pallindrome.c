#include<stdio.h>
int main(){
    int n,a;
    int b=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int m=n;
    while (n>0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(m==b){
        printf("%d is a pallindrome",m);
    }
    else{
        printf("%d is not a pallindrome",m);
    }
    return 0;
}