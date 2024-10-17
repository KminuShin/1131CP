#include <stdio.h>
#include <math.h>

int main() {
    int invoice[5] = {0};
    int level[6] = {200,1000,4000,10000,40000,200000};
    printf("please input 5 invoice prize num\n>> ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &invoice[i]);
    }
    int input;
    int digits;
    int level_cnt;
    printf("give me your invoice number:\n>> ");
    scanf("%d", &input);
    while(input != -1) {
        digits = 1000;
        if(input == invoice[0]) {
            printf("Congrats!!, you won 10000000!\n");
        } else if (input == invoice[1]) {
            printf("Congrats!!, you won 2000000!\n");
        } else {
            while(1) {
                if((input%digits == invoice[2]%digits)||(input%digits == invoice[3]%digits)||(input%digits == invoice[4]%digits)) {
                    digits = digits * 10;
                } else {
                    break;
                }
            }
            if(log(digits) > 3) {
                level_cnt = log(digits) - 3;
                printf("Congrats!!, you won %d!\n", level[level_cnt]);
            }
            
        }
        printf("give me your invoice number:\n>> ");
        scanf("%d", &input);
    }
}