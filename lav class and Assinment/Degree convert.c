#include <stdio.h>
#include <stdlib.h>

int main(){

   int degree;
   float far;
   printf("Enter The Temperature in Degree: "); // prompt mag ----49
   scanf("%d", &degree);

   far = (float)degree* 9/5 + 32; // type cast

   printf("\nThe Temperature in  Farenheit : %.2f \n", far);


    return 0;
}
