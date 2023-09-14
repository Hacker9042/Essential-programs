#include<stdio.h>
int main(){
    int a[5];
    int i,j,count,n;
    for(i=0;i<5;i++){
        printf("enter the number int the array: ");
        scanf("%d", &a[i]);
    }
    printf("enter the number you want to serch: ");
    scanf("%d", &n);
    for(j=0;j<5;j++){
        if(a[j]==n){
            count++;
        }
    }
    printf("%d is repeated is %d times", n,count);
    return 0;
}