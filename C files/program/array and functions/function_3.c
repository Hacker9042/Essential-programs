#include<stdio.h>
void ispallindrome(int);
void main(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    ispallindrome(x);
}
void ispallindrome(int a){
    int w=0;
    int temp=a;
    while (temp>0)
    {
        w=w*10+temp%10;
        temp=temp/10;
    }
    if(a==w){
        printf("%d is a pallindrome", w);
    }
    else {
        printf("Not a palindrome");
    }
    
}