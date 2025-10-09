#include <stdio.h>
#define pi 3.1416
int main(){
    int height,d1,d2,d_1,d_2;
    float surface_area, volume;

    printf("Input: ");
    scanf("%d%d%d",&height, &d1, &d2);

    d_1 = d1/2;
    d_2 = d2/2;

    volume = pi*height*(d_1*d_1 - d_2*d_2);
    surface_area = 2*pi*((d_1*d_1 - d_2*d_2) + (d_1 + d_2)*height);

    printf("Volume: %.2f \nSurface_area: %.2f", volume, surface_area);

    return 0;
}
