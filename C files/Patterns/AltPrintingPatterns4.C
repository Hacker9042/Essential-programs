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

// what i did here is , i used two while loops and two for loops
// to terminate the program after a certain stage that is i<=n for the first case
// after completing the first pattern and thats used as alt of using another for loop
// and i<=n to terminate the loop after k has the same value as n on the second case


#include<stdio.h>
int main()
{
int n,i=1,j;
printf("Enter Number of rows in pattern: ");
scanf("%d", &n);
 while(i<=n)
 { 
 for(j=i;j<=n;j++)
  { 
    printf("*") ; 
  } 
   printf("\n");
   i++;
 }
 i=1;
 while(i<=n)
 {
 for(j=1;j<=i;j++)
   { 
      printf("*");
   }
 printf("\n");
 i++;
 }
return 0;
}