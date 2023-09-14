#include<stdio.h>
int main(){
    float a,b,c,avg;
    printf("enter three numbers:");
    scanf("%f %f %f", &a,&b,&c);
    avg=(a+b+c)/3;
    printf("The avg of three nuber entered is:%f\n ", avg);
    return 0;
}