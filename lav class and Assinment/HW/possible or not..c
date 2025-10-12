#include <stdio.h>

int main(){

    int a,b,c,max, min,mid, LHS,RHS;

    printf("input:\n");
    scanf("%d%d%d",&a,&b,&c);

    //for maximum:
    if(a>b && a>c){
        max= a;
    }else if(b>c){
        max= b;
    }else{
        max= c;
    }

    // for minimum:
    if(a<b && a<c){
        min= a;
    }else if(b<c){
        min= b;
    }else{
        min= c;
    }

    // for middle:

    if(a!=max && a!= min){
        mid= a;
    }else if(b!=max && b!=min){
        mid= b;
    }else{
        mid=c;
    }

    a= min;
    b= mid;
    c= max;

    LHS = a*a + b*b;
    RHS = c*c;

//    printf("A: %d\t C: %d",a,c);

    if(LHS==RHS){
        printf("Possible");

    }else{
        printf("Not Possible");

    }

    return 0;
}
