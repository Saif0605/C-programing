#include <stdio.h>

int main(){

    int a,b,c,max, min;

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

    printf("MAX: %d\t MIN: %d\n",max,min);

    return 0;
}

