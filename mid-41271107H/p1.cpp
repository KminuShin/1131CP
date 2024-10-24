#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", num);
    for (int i = 0;i < num;i+=2) {

        for (int j = 0;j < num;j+=2) {

            // print space
            for (int k = 0;k < num/2-j;k++) {
                printf(" ");
            }

            //print num
            for (int k = 0;k < j;k++) {
                printf("%d", );
            }
        }


    }
}
