#include<stdio.h>
void example(int *p);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d\n",a);
    example(&a);
    printf("%d\n",a);
    return 0;
}
void example(int *p){
    *p=50;
    printf("%d\n",p);
}