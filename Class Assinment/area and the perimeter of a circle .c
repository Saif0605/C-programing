#include <stdio.h>
#define pi 3.1416

int main(){
    int radius;
    float area, perimeter;

    printf("Input:\n");
    scanf("%d",&radius);

    area = pi* radius* radius;
    perimeter = 2*pi* radius;

    printf("Area: %.2f \nPreimeter: %.2f", area, perimeter);
    return 0;
}
