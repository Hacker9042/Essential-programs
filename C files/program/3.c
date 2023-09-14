#include<stdio.h>
#include<math.h>
int main(){
    float side, area;
    printf("Enter the side of the equilateral triangle:");
    scanf("%f", &side);
    area=(sqrt(3)*side*side)/4;
    printf("The area of the given Equilateral side is: %f\n", area);
    return 0;
}