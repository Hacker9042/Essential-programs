#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a");
    scanf("%f", &a);

    printf("Enter b");
    scanf("%f", &b);

    printf("perimeter of rectangle is: %f", 2*(a+b));
    return 0;
}