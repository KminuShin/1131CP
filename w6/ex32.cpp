#include <stdio.h>

int main() {
    int num1, num2, opr;
    printf("\n|************************|\n");
    printf("|Advanced Calculator vl.O|\n");
    printf("|************************|\n");
    printf("\nThis calculator can do sum(+)/sub(-)/mul(*)/div(/)/mod(%%) to the two numbers you give\n");
    printf("==PLEASE DON'T DIVIDE BY 0==\n");
    printf("> sum(+) is 1\n");
    printf("> sub(-) is 2\n");
    printf("> mul(*) is 3\n");
    printf("> div(/) is 4\n");
    printf("> mod(%%) is 5\n");

    while (1) {
        printf("\ngive me [NUMBER1] [OPERATOR] [NUMBER2]\n");
        printf("for exit, enter 0 0 0\n");
        printf("for hint, enter 0 80 0\n");
        scanf("%d%d%d", &num1, &opr, &num2);

        if ((num1 == 0)&&(opr == 0)&&(num2 == 0)) {break;}

        if ((opr == 80)&&(num1 == 0)&&(num2 == 0)) {
            printf("\n> sum(+) is 1\n");
            printf("> sub(-) is 2\n");
            printf("> mul(*) is 3\n");
            printf("> div(/) is 4\n");
            printf("> mod(%%) is 5\n");
            continue;
        }
        
        if(opr >= 4) {
            while (!num2) {
                printf("PLEASE DON'T DIVIDE BY 0!!\n");
                printf("Let's try again\n");
                printf("give me [NUMBER2]\n");
                scanf("%d", &num2);
            }
        }

        if (opr == 1) {printf("%d + %d = %d\n",num1,num2,num1+num2);}
        else if (opr == 2) {printf("%d - %d = %d\n",num1,num2,num1-num2);}
        else if (opr == 3) {printf("%d * %d = %d\n",num1,num2,num1*num2);}
        else if (opr == 4) {printf("%d / %d = %d\n",num1,num2,num1/num2);}
        else if (opr == 5) {printf("%d %% %d = %d\n",num1,num2,num1%num2);}
        else {printf("oops wrong operator:%d", opr);}

        printf("\nNEXT ROUND!!\n");
    }
}