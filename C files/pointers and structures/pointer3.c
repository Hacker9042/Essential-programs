#include<stdio.h>
void swap(int *p1, int *p2);
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a,&b);
    swap(&a,&b);
    return 0;
}
void swap(int *p1, int *p2){
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("%d is the first number swapped value\n ", *p1);
    printf("%d is the second number swapped value\n", *p2);
}