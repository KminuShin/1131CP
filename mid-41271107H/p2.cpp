#include <stdio.h>

int main() {
    int input;
    int digits;
    int ten;
    int temp_input;
    int yesno;
    while (true) {
        scanf("%d", &input);
        digits = 0;
        ten = 1;
        temp_input = input;
        yesno = 1;
        if (input == -1) {
            break;
        }

        // check how many digits
        while (temp_input >= 1) {
            temp_input = temp_input / 10;
            digits += 1;
        }

        // store in 2 array
        for (int i = 0;i < digits;i++) {
            ten = ten * 10;
        }

        ten = ten / 10;

        int nrev[digits]{0}, rev[digits]{0};
        temp_input = input;
        for (int i = 0;i < digits;i++) {
            nrev[i] = temp_input/ten;
            temp_input = temp_input - (temp_input/ten*ten);
            ten = ten / 10;
        }

        temp_input = input;
        for (int i = 0;i < digits;i++) {
            rev[i] = temp_input%10;
            temp_input = temp_input/10;
        }

        // compare
        for (int i = 0;i < digits;i++) {
            // printf("%d, %d\n", rev[i], nrev[i]);
            if(rev[i] != nrev[i]) {
                yesno = 0;
                //break;
            }
        }

        if (yesno == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

}
