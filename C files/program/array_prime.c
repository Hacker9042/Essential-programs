#include <stdio.h>
int main()
{
    int i, j, k, n, count=0;
    int x[10];
    for (i = 0; i <= 9; i++)
    {
        printf("enter the number");
        scanf("%d", &x[i]);
    }
    for (j = 0; j <= 9; j++)
    {
         count=0;
        for (k = 1; k <= x[j]; k++)
        {
            if (x[j] % k == 0)
            {
            count++;
            }
        }
        if (count == 2)
        {
            printf("%d is a prime number\n", x[j]);
        }
        else
        {
            printf("%d is not a prime number\n", x[j]);
        }
    }
    return 0;
}