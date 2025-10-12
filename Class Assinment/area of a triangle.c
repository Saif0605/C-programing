#include <stdio.h>

int main(){
    int height, base;
    float area;

    printf("Input:\n");
    scanf("%d%d", &height,&base);

    area = .5*height*base;

    printf("\nArea: %.2f", area);

    return 0;
}
