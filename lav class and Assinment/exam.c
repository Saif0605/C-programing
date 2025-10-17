#include <stdio.h>

int main()
{

    int year;

    printf("Input:\n");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a Leap year\n", year);
    }
    else
    {
        printf("%d is not a Leap year\n", year);
    }


//    ........................................

    int num;
    printf("Input:\n");
    scanf("%d", &num);

    if(num>1 && num%2!=0){
        printf("The number is a Prime number\n");
    }else
    {
        printf("The number is not Prime number\n");
    }





    return 0;
}


