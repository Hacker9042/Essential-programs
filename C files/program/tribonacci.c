#include<stdio.h>
int main(){
    int a=0,b=1,c=2;
    int i,n,sum;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    printf("%d ",c);
    for(i=1;i<=n-3;i++)
    {
        sum=a+b+c;
        printf("%d ",sum);
        a=b;
        b=c;
        c=sum;
    }
    return 0;
}