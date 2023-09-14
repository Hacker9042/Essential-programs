//WAPC Pattern
// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter Number of rows in pattern: ");
scanf("%d", &n);
k=n;
 while(k>=1) 
 //[while(j=k) also works here , 
 //ig bcz when k becomes 0 it makes j=k=0 so the while loop terminates & the program stops 
 //coz 0 is not a true value]
 { 
 for(j=1;j<=k;j++)
  { 
    printf("*") ; 
  } 
  --k;
   printf("\n");
 }
 for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
   { 
      printf("*");
   }
 printf("\n");
}
return 0;
}