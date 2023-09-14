#include<stdio.h>
int main()
{
    int a[10], count,i,j;
    for(int i=0;i<10;i++){
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++){
         count=0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
            count++;
            }
        }
        if (count == 2)
        {
            printf("%d is the prime number\n", a[i]);
        }
        else{
            printf("%d is the non prime number\n", a[i]);
        }
    }
    return 0;
}