#include<stdio.h>
void fact(int);
void main(){
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    fact(x);
}
void fact(int a){
    int temp=a;
    int b=1;
    for(int i=1;i<=temp;i++){
        b=b*i;
    }
    printf("%d", b);
}