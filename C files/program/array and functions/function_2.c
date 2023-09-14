#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main(){
    int a,b;
    printf("enter the two numbers:");
    scanf("%d %d", &a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
}
void add(int x,int y){
    int sum=x+y;
    printf("%d\n", sum);
}
void sub(int x,int y){
    printf("%d\n", x-y);
}
void mul(int x,int y){
    printf("%d\n",x*y);
}
void div(int x,int y){
    printf("%d\n", x/y);
}