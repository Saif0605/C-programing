#include <stdio.h>

int main(){

    int year,a,b,c;

    printf("Input:\n");
    scanf("%d", &year);

    a= year%400;
    b= year%4;
    c= year%100;

    if(a==0 || b==0 && c!=0){
        printf("The year is leep year\n");
    }else
    {
        printf("The year is not leep year\n");
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

