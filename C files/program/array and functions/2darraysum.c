#include<stdio.h>
int main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the number:");
            scanf("%d", &a[i][j]);
        }
    }
    int s=0;
    int s1=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]%2==0){
                s=s+a[i][j];
            }
            else{
                s1=s1+a[i][j];
            }
        }
    }
    printf("the sum of even number of array is %d", s);
    printf("the sum of odd number of array is %d", s1);
    return 0;
}