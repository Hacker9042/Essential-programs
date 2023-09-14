#include<stdio.h>
int main(){
    int x[10],i;
    int n,a,b=0;
    for (i = 1; i <= 10; i++)
    {
        printf("enter the number");
        scanf("%d",&x[i]);
    }
    int m=x[i];
    while (n>0)
    {
        a=x[i]%10;
        b=b*10+a;
        x[i]=x[i]/10;
    }
    if(m==b){
        printf("%d is a pallindrome",m);
    }
    else{
        printf("%d is not a pallindrome",m);
    }

    return 0;
}