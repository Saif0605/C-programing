#include <stdio.h>

int main(){

    int input,num1,num2,num3,num4, max, min;

    printf("Input:\n");
    scanf("%d", &input);

    num1 = input%10;
    input/=10;
    num2 = input%10;
    input/=10;
    num3 = input%10;
    input/=10;
    num4 = input%10;



    printf("%d %d %d %d",num1,num2,num3,num4);



    if(num1>num2 && num1>num3 && num1>num4){
        max= num1;
      //  min = num2;
    }else if(num2>num1 && num2>num3 && num2>num4){
        max = num2;
       // min = num3;
    }else if(num3>num1 && num3>num2 && num3>num4){
        max = num3;
       // min = num4;
    }else{
        max = num4;
        //min = num1;
    }

     printf("\nYour Greatest number is %d\n", max);

    if(num1<num2 && num1<num3 && num1<num4){

        min = num1;
    }else if(num2<num1 && num2<num3 && num2<num4){

        min = num2;
    }else if(num3<num1 && num3<num2 && num3<num4){

        min = num3;
    }else{

        min = num4;
    }


    printf("Your Smallest number is %d", min);



    return 0;
}
