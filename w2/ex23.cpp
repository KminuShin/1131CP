/*
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
    printf("please enter NUMBER1 OPERATOR NUMBER2\n");
    scanf("%d%d%d", &num1, &opr, &num2);

    if (!num2) {
        printf("\n2nd number should not be 0, enter 2nd num again\n");
        scanf("%d", &num2);
    }

    if (!num2) {
        printf("Y R U !Listening :(\n");
    }

    if (num2) {
        if (opr == 1) {printf("%d + %d = %d\n",num1,num2,num1+num2);}
        else if (opr == 2) {printf("%d - %d = %d\n",num1,num2,num1-num2);}
        else if (opr == 3) {printf("%d * %d = %d\n",num1,num2,num1*num2);}
        else if (opr == 4) {printf("%d / %d = %d\n",num1,num2,num1/num2);}
        else if (opr == 5) {printf("%d %% %d = %d\n",num1,num2,num1%num2);}
        else {printf("oops wrong operator:%d", opr);}
    }
}
*/

/*
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    string command1 = "shutdown /s";
    string command2 = "shutdown /a";
    int num1, num2, opr;
    printf("\n|************************|\n");
    printf("|Advanced Calculator vl.O|\n");
    printf("|************************|\n");
    printf("\nThis calculator can do sum(+)/sub(-)/mul(*)/div(/)/mod(%%) to the two numbers you give\n");
    printf("==PLEASE DON'T DIVIDE BY 0, OR I'LL SHUTDOWN YOUR COMPUTER==\n");
    printf("> sum(+) is 1\n");
    printf("> sub(-) is 2\n");
    printf("> mul(*) is 3\n");
    printf("> div(/) is 4\n");
    printf("> mod(%%) is 5\n");
    printf("please enter NUMBER1 OPERATOR NUMBER2\n");
    scanf("%d%d%d", &num1, &opr, &num2);

    if (!num2) {
        printf("\n2nd number should not be 0, enter 2nd num again\n");
        scanf("%d", &num2);
    }

    if (num2 == 0) {
        printf("==I WARNED YOU==\n");
        Sleep(3000);
        system(command1.c_str());
        Sleep(2000);
        system(command2.c_str());
        Sleep(500);
        printf("\nnah just joking\n");
    }

    if (num2) {
        if (opr == 1) {printf("%d + %d = %d\n",num1,num2,num1+num2);}
        else if (opr == 2) {printf("%d - %d = %d\n",num1,num2,num1-num2);}
        else if (opr == 3) {printf("%d * %d = %d\n",num1,num2,num1*num2);}
        else if (opr == 4) {printf("%d / %d = %d\n",num1,num2,num1/num2);}
        else if (opr == 5) {printf("%d %% %d = %d\n",num1,num2,num1%num2);}
        else {printf("oops wrong operator:%d", opr);}
    }
}
*/

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
        if (!num2) {
            //
        }
        if (!num2) {}
        else {
            //
        }
    } else {
        //
    }
    if (!num2) {
        printf("\n2nd number should not be 0, enter 2nd num again\n");
        scanf("%d", &num2);
    }

    if (!num2) {
        printf("Y R U !Listening :(\n");
    }

    if (num2) {
        if (opr == 1) {printf("%d + %d = %d\n",num1,num2,num1+num2);}
        else if (opr == 2) {printf("%d - %d = %d\n",num1,num2,num1-num2);}
        else if (opr == 3) {printf("%d * %d = %d\n",num1,num2,num1*num2);}
        else if (opr == 4) {printf("%d / %d = %d\n",num1,num2,num1/num2);}
        else if (opr == 5) {printf("%d %% %d = %d\n",num1,num2,num1%num2);}
        else {printf("oops wrong operator:%d", opr);}
    }
}