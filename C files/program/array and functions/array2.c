#include<stdio.h>
int main(){
    int a[10],n,c;
    int x=0;
    for(int i=0;i<10;i++){// entering number in array
        printf("enter the number");
        scanf("%d", &a[i]);
    }
    for(int i=0; i<10;i++){ 
        x=0;
        n=a[i];
        while (n>0)// reversinng the digits
    {
        c=n%10;
        x=x*10+c;
        n=n/10;
    }
    if(x==a[i]){ 
        printf("%d is pallindrome\n", a[i]);
    }
    else{
        printf("%d is not pallindrome\n", a[i]);
    }
    }
    
    return 0;
}