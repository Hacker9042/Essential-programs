#include<stdio.h>
int main(){
    int temp;
    int k,count=0;
    printf("enter the number: ");
    scanf("%d", &temp);
    for (k = 1; k <=temp; k++)
        {
            if (temp % k == 0)
            {
            count++;
            }
        }
        if (count == 2)
        {
            printf("%d is prime number",temp);
        }
    return 0;
}