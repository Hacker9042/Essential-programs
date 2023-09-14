#include<stdio.h>
int main(){
    int i,n,count=0;
    int x[10];
    for (i = 1; i <= 10; i++)
    {
        printf("enter the number");
        scanf("%d",&x[i]);
    }
    for(i=1; i<=10; i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}