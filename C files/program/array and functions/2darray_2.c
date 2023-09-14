#include<stdio.h>
int main(){
    int a[3][3];
    int i,j,n,count;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the number in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the number u wanna serch");
    scanf("%d", &n);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==n){
                count++;
            }
        }
    }
    printf("%d in matrix has a frequency of %d", n,count);
    return 0;
}