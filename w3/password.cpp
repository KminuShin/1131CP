/*
#include <stdio.h>

int main() {
    int passwd = 48763, att = 5, usrtry;
    while(att > 1) {
        printf("\npassword:");
        scanf("%d", &usrtry);
        if(passwd==usrtry) {
            printf("hi usr");
            break;
        }
        else {printf("wrong password, you will be locked after %d attempts\n", att-1);}
        att -= 1;
    }
    if(att == 1) {
        printf("\npassword:");
        scanf("%d", &usrtry);
        if(passwd==usrtry) {
            printf("hi usr");
        }
        else {printf("keep screaming LET ME INNNNNNN won't work, bro");}
    }
}
*/

#include <stdio.h>

int main() {
    int passwd = 48763, att = 5, usrtry;
    printf("\npassword:");
    scanf("%d", &usrtry);
    while(passwd!=usrtry&&att>1) {
        printf("wrong password, you will be locked after %d attempts\n", att-1);
        att -= 1;
        printf("\npassword:");
        scanf("%d", &usrtry);
    }
    if(passwd!=usrtry) {
        printf("keep screaming LET ME INNNNNNN won't work, bro");
    } else {
        printf("hi usr :)");
    }

}