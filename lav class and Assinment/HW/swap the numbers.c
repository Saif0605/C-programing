#include <stdio.h>

int main(){

    int a,b,c,tem;

    printf("input:\n");
    scanf("%d%d%d",&a,&b,&c);

    tem= a;
    a= c;
    c= b;
    b= tem;

    printf("A: %d\t B: %d\t C: %d\n",a,b,c);

    return 0;
}
