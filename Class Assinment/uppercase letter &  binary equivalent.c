#include <stdio.h>

int main(){
    char alp1, alp2;
    int a,b;

    printf("Your small Character: ");
    scanf("%c", &alp1);
    printf("Your big Character: ");
    scanf(" %c", &alp2);

    a= (int)alp1;
    b= (int)alp2;
    alp1 -=32;
    alp2 += 32;

    printf("\nUppercase letter: %c", alp1);
    printf("\nLowercase letter: %c\n", alp2);

    printf("\n%d %d\n", a,b);

   printf("\nBinary equivalent for 1: ");
    for (int i= 0;a>0; i++){
        printf("%d", a%2);
        a = a/2;
    }
    printf("\nBinary equivalent for 2: ");
    for (int i= 0;b>0; i++){
        printf("%d", b%2);
        b = b/2;
    }



    return 0;
}
