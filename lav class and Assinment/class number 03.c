#include <stdio.h>
#include <stdlib.h>

int main(){

 int n = 0;
//
//    if(n>0){
//        printf("Positive\n");
//        if(n%2==0){
//            printf("The number is Even\n");
//        }else{
//            printf("The number is odd\n");
//        }
//
//    }else if(n < 0 ){
//        printf("negative & abs %d\n", abs(n)); // abs --- negative to positive
//        printf("4 sqrt 2 is %d \n" sqrt(2));
//        printf("4 power 2 is %.2f" power(4,2));
//        if(n%2==0){
//            printf("The number is Even\n");
//        }else{
//            printf("The number is odd\n");
//        }
//
//    }
//    else{
//        printf("Zero\n");
//
//    }




    switch(n>0){
        case 0: // false -- if
            printf("neg\n");
            break;
        case 1: // true -- if
            printf("Positive\n");
            break;
        default:
            printf("Zero\n");

    }



return 0;
}
