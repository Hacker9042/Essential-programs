#include<stdio.h>
void isprime(int);
void main(){
    int x;
    printf("enter a number");
    scanf("%d", &x);
    isprime(x);
}
void isprime(int a){
    int temp=a;
    int k,count=0;
    for (k = 1; k <=temp; k++)
        {
            if (temp % k == 0)
            {
            count++;
            }
        }
        if (count == 2)
        {
            printf("%d is prime number",a);
        }
}