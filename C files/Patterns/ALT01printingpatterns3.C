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
    //printf("Enter Number Of rows in pattern:");
    //scanf("%d",&n);
    //k=n;
    for(i=5;i>=1;i--)
    { 
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    
    }
    return 0 ;
}
