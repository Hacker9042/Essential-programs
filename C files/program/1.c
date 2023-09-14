//code for checking weather the given number is two digit number or not
#include<stdio.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;
}