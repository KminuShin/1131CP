#include <stdio.h>

int main() {
    const char character[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int n, engSum = 0, numSum = 0, base = 26*26*26, numBase;
    scanf("%d", &n);
    char input[n][9];
    for (int i=0;i < n;i++) {
        for (int j=0;j < 9;j++) {
            input[i][j] = getchar();
            // printf("%c ", input[i][j]);
        }
        // printf("\n");
    }
    // yuck
    for (int i=0;i < 3;i++) {
        engSum = 0;
        numSum = 0;
        base = 26*26*26;
        numBase = 1000;
        for (int j=0;j < 3;j++) {
            for (int k=0;k < 26;k++) {
                if (input[i][j] == character[k]) {
                    engSum += k * base;
                    base = base / 26;
                    continue;
                }
            }
        }
        for (int j=0;j < 4;j++) {
            for (int k=0;k < 10;k++) {
                if (input[i][j+4] == numbers[k]) {
                    numSum += k * numBase;
                    numBase = numBase / 10;
                    continue;
                }
            }
        }
        if (((numSum - engSum) < 100)&&((numSum - engSum) > -100)) {
            printf("nice\n");
        } else {
            printf("not nice\n");
        }
    }
}