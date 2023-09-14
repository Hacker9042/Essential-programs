#include<stdio.h>
int main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the number");
            scanf("%d", &a[i][j]);
        }
    }
    int s=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i!=1 || j!=1){
                s=s+a[i][j];
            }
        }
    }
    printf("the sum of the pheripheri of the matrix is %d", s);
    return 0;
}