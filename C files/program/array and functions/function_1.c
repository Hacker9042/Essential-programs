#include<stdio.h>
int example(int);
void main(){
    int b=10;
    printf("%d ", b);
    int x= example(b);
    printf("%d ", b);
}
int example(int a){
    a=20;
    printf("%d ", a);
    return a;
}