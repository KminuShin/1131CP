#include <stdio.h>

bool isBalanced(const int arr[],int len) {
    int pos = 0, neg = 0;
    for (int i=0;i<len;i++) {
        if (*(arr+i) > 0) {
            pos += 1;
        } else if (*(arr+i) < 0) {
            neg += 1;
        }
    }

    return pos==neg;
}

int main() {
    int a[4] = {-3, 4, 5, -2};
    int b[6] = {1, 2, 3, 4, -1, -2};

    if (isBalanced(a, 4)) {
        printf("a is Balanced.\n");
    }

    if (isBalanced(b, 6)) {
        printf("b is Balanced.\n");
    }
}