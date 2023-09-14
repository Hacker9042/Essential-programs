#include <stdio.h>
int main()
{
  int  j, i,k,l;
  int s=1;  
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= 3-i; j++)
      printf(" ");

    for (j = 1; j <= 2*i-1; j++)
      printf("%d",s);
      s++;

    printf("\n");
  }

  for (k = 1; k <= 3 - 1; k++)
  {
    for (l = 1; l <= k; l++)
      printf(" ");

    for (l = 1 ; l <= 2*(3-k)-1; l++)
      printf("%d", s);
      s++;

    printf("\n");
  }

  return 0;
}