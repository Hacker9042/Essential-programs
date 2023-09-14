#include<stdio.h>
void table(int);
int main(){
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    table(x);
    return 0;
}
void table(int a){
    int temp=a;
    int s;
    for(int i=1;i<=10;i++){
        printf("%d\n", temp*i);
    }
}