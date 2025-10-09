#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416 // for Global use in (any time in code)

int main(){
    int a;  // %d -- %d
    float b; // %f -- %.3f
    double c; // %lf --- %.2lf
    char d; // %c

    printf("Enter an Integer:"); //Prompt msg
    scanf("%d", &a);
    printf("\nA: %d", a);

    printf("\n For new line \n");
    printf("For backslach: \\ \n");
    printf("for Tab(4 space): \t hi I am saoum\n");
    printf("for parsent: %% \n");
    printf(" for\"'");




    b= pi*a*a;
    printf("\nArea: %.2f",  b);




    return 0;
}
