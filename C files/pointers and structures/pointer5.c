#include<stdio.h>
int main(){
    int a[5]={10,232,6365,64,6};
    int *ptr;
    ptr=a;
    printf("%d\n", *(ptr+1));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    
    return 0;
}