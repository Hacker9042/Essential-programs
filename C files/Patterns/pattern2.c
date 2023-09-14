#include<stdio.h>
int main(){
    int s=1;
    int i,j,space;
    for ( i = 1; i <= 3; i++)
    {
        for (space = 1; space <= (3-i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ",s );
            s++;
        }
        printf("\n");
        
    }
    
    return 0;
}