#include<stdio.h>
int main(){
    int i,j,x[10],s=0;
    for(i=1;i<=10;i++)
    {
        printf("enter the numer:");
        scanf("%d",&x[i]);
    }
    for(j=1;j<=10;j++)
    {
        s=s+x[j];
    }
    printf("%d is the sum of the number stored in the array",s);
    return 0;
}