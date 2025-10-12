#include <stdio.h>

int main(){

    int num1,num2,num3, max, min;

    printf("Input:\n");
    scanf("%d%d%d", &num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        max= num1;
        min = num2;
    }else if(num2>num1 && num2>num3){
        max = num2;
        min = num3;
    }else{
        max = num3;
        min = num1;
    }

    printf("Your Greatest number is %d\n", max);
    printf("Your Smallest number is %d", min);



    return 0;
}
