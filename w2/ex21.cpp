#include <stdio.h>

int main() {
    int num1, num2;
    printf("\nPlease input 2 numbers\n");
    scanf("%d%d", &num1, &num2);

    if (!num2) {
        printf("\n2nd number should not be 0, enter 2nd num again\n");
        scanf("%d", &num2);
    }

    if (!num2) {printf("Y R U !Listening\n");}

    if (num2) {
        printf("%d + %d = %4d\n",num1,num2,num1+num2);
        printf("%d - %d = %4d\n",num1,num2,num1-num2);
        printf("%d * %d = %4d\n",num1,num2,num1*num2);
        printf("%d / %d = %4d\n",num1,num2,num1/num2);
        printf("%d %% %d = %4d\n",num1,num2,num1%num2);
    }
}
