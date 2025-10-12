#include <stdio.h>

int main(){
    int num1,num2,num3;
    float avg;

    printf("Inputs:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    avg = (num1+num2+num3)/3;

    printf("Your average is %.2f.So, ", avg);

    if(100<= avg && avg>=90){
        printf("Grade = A");
    }else if(89.99<= avg && avg>=70){
        printf("Grade = B");
    }else if(69.99<= avg && avg>=50){
        printf("Grade = C");
    }else{
        printf("Grade = F");
    }



    return 0;
}
