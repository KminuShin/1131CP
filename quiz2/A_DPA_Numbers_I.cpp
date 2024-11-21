#include <stdio.h>

int main() {
    int times;

    scanf("%d", &times);

    int number, sum;

    for(int i=0;i < times;i++) {
        sum = 0;
        scanf("%d", &number);
        for(int j = 1;j < number;j++) {
            if (number % j == 0) {
                sum += j;
            }
        }
        if (sum > number) {
            printf("abundant");
        } else if (sum < number) {
            printf("deficient");
        } else {
            printf("perfect");
        }
        printf("\n");
    }
}