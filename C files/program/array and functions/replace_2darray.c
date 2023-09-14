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
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]%2==0){
                a[i][j]=0;
            }
            else{
                a[i][j]=1;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}