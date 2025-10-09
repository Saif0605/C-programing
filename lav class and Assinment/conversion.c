#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, year, month, day, r1, r2;

    printf("Your number:");
    scanf("%d", &num);
    year = num/365;
//    month = (num - 365*16)/30;
//    day = (num - 365*16)- month*30;
    r1= num%365;
    month= r1/30;
    r2 = r1%30;
    day = r2;


    printf("%d years %d month %d days\n",year,month,day);



    return 0;
}

