#include <stdio.h>

int main() {
    printf("please enter 5 numbers\n>> ");
    int array[5];
    for(int i = 0;i <= 4;i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for(int i = 0;i <= 4;i++) {
        printf("%d ", array[i]);
        if(i<4) {
            printf("+ ");
        }
        sum += array[i];
    }
    printf("= %d.",sum);
}