#include <stdio.h>

int main(){
    int a,b,c;

    printf("Give me your numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a%2==0)
        printf("Your number %d is even.\n", a);
    else
        printf("Your number %d is odd.\n", a);
        if (b%2==0)
        printf("Your number %d is even.\n", b);
    else
        printf("Your number %d is odd.\n", b);
            if (c%2==0)
        printf("Your number %d is even.\n", c);
    else
        printf("Your number %d is odd.\n", c);

    return 0;
}

