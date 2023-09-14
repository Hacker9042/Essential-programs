#include<stdio.h>
#include<math.h>
int main(){
    float r;
    printf("enter the radius:");
    scanf("%f", &r);
    float pi=3.14;
    printf("The perimeter of the circle ofthe given radius is: %f\n", 2*pi*r);
    printf("The area of the cirlcle of the given radius is: %f\n", pi*r*r);
    return 0;
}