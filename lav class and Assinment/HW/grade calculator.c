#include <stdio.h>

int main(){

    int score;

    printf("input:\n");
    scanf("%d",&score);

    switch (score){
    case 93 ... 100:
        printf("Grade A\n");
        break;
    case 90 ... 92:
        printf("Grade A-");
        break;
    case 87 ... 89:
        printf("Grade B+");
        break;
    case 83 ... 86:
        printf("Grade B Good");
        break;
    case 80 ... 82:
        printf("Grade B-");
        break;
    case 77 ... 79:
        printf("Grade C+");
        break;
    case 73 ... 76:
        printf("Grade C Average");
        break;
    case 70 ... 72:
        printf("Grade C-");
        break;
    case 67 ... 69:
        printf("Grade D+");
        break;
    case 60 ... 66:
        printf("Grade D poor");
        break;
    case 0 ... 59:
        printf("Grade F Failure");
        break;

    default:
        printf("Invalid\n");
    }



    return 0;
}
