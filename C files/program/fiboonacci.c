#include<stdio.h>
int main(){
    int a=0,b=1;
    int i,fact=1, sum;
    int n,x=1;
    printf("enter the number of termss");
    scanf("%d",&n);
    printf("%d ",a);
    printf("%d ",b);
    for( i =1; i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        for (int j = 1; j <= sum; j++) // calculating factorial of c
    {
        fact *= j;
    }

    printf("Factorial of %dth term of Fibonacci series is %d\n", i, fact);
    fact = 1; // resetting fact for next iteration

    }
    
    return 0;
}