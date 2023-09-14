//WAPC Pattern
// *****
// ****
// ***
// **
// *

#include<stdio.h>
int main()
{
    int n,i,j,k ;
    printf("Enter Number Of rows in pattern:");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    { 
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
      --k;  
    }
    return 0 ;
}
