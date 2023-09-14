#include<stdio.h>
int main(){
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("enter the number in matrix: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        int count=0;
        for(j=0;j<5;j++){
            if(a[i]==a[j]){
                break;
            }
            else{
                count++;
            }
        }
        printf("%d ", count);
    }
    return 0;
}