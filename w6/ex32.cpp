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
    printf("give me [NUMBER1] [OPERATOR] [NUMBER2]\n");
    scanf("%d%d%d", &num1, &opr, &num2);

    
    if(opr >= 4) {
        while (!num2) {
            //
        }
    }

        if (opr == 1) {printf("%d + %d = %d\n",num1,num2,num1+num2);}
        else if (opr == 2) {printf("%d - %d = %d\n",num1,num2,num1-num2);}
        else if (opr == 3) {printf("%d * %d = %d\n",num1,num2,num1*num2);}
        else if (opr == 4) {printf("%d / %d = %d\n",num1,num2,num1/num2);}
        else if (opr == 5) {printf("%d %% %d = %d\n",num1,num2,num1%num2);}
        else {printf("oops wrong operator:%d", opr);}
}