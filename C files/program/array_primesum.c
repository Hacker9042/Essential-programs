#include <stdio.h>
int main()
{
    int i, j, k, n, count=0,s=0;
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
            s=s+x[j];
        }
        
    }
    printf("%d is the sum of all prime number",s);
    return 0;
}