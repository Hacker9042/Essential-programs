#include<stdio.h>
int main(){
    int i,j,k,x[10];
    int s1=0,s2=0;
    for(i=0;i<=9;i++)//for input
    {
        printf("enter the number in array");
        scanf("%d",&x[i]);
    }
    for(j=0;j<=9;j++)
    {
        if(x[j]%2==0)
        {
            s1=s1+x[j]; // extracting even number and taking sum
    
        }
        if(x[j]%2!=0)
        {
            s2=s2+x[j];
        }
    }
    
    printf("the sum of even number in array is %d \n",s1);
    printf("the sum of odd number in array is %d \n",s2);
    return 0;
}