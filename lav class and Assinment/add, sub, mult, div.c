#include <stdio.h>
#include <stdlib.h>

int main(){

    int add, sub, mult, num1=9, num2=2;
    float div;


    printf("What is your number: \n");
    scanf("%d%d", &num1, &num2);

    add = num1+ num2;
    sub = num1- num2;
    mult= num1*num2;

    div = num1/(float)num2; // Type Casting

    printf("sum: %d\nsub: %d\nmult: %d\ndiv: %.3f", add, sub, mult, div);

    return 0;
}
