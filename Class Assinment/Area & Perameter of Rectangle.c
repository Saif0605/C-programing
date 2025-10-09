#include <stdio.h>

int main(){
    int length, width, Area, Perimeter;


    printf("Inputs:\n");
    scanf("%d%d", &length, &width);

    Area= length*width;
    Perimeter= 2*(length + width);

    printf("Area: %d \nPerimeter: %d\n", Area, Perimeter);
    return 0;
}
