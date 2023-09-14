#include<stdio.h>
int main()
{
 	int i, j; 
 	int s=1;
	for(i = 1; i <= 3; i++)
	{
        for(j = 1; j <= i; j++)
        {
             printf("%d", s);
             s++;
        }
        printf("\n");
    }

    for(i =  2; i > 0; i--)
	{
        for(j = 1; j <= i; j++)
        {
             printf("%d", s);
             s++;
        }
        printf("\n");
    }
 	return 0;
}