#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1416

int main()
{
    int r;
    float a,p;

    scanf("%d",&r);

    a= Pi*r*r;
    p= 2*(Pi*r);

    printf("\n%.2f \n%.2f", a,p);

    return 0;
}
