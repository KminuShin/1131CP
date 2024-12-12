#include <stdio.h>

int main() {
    int n, isJolly;
    while (scanf("%d", &n) == 1) {
        isJolly = 1;
        int arr[n] = {0};
        int jollyCount[n-1] = {0};
        for (int i=0;i < n;i++) {
            scanf("%d", &arr[i]);
        }
        int num;
        for (int i=1;i < n;i++) {
            num = arr[i] - arr[i-1];
            if (num < 0) {
                num = num*(-1);
            }
            jollyCount[num-1] += 1;
        }
        for (int i=0;i < n-1;i++) {
            // printf("%d ", jollyCount[i]);
            if ((jollyCount[i] > 1)||(jollyCount[i] == 0)) {
                isJolly = 0;
                break;
            }
        }
        if (isJolly) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }
}