#include <stdio.h>

int main() {
    int depo, rate;
    unsigned long year = 0;
    unsigned long long curr = 0, goal;
    printf("[deposit(dollars)] [goal(dollars)] [rate(%%)]\n");
    scanf("%d%d%d", &depo, &goal, &rate);
    while(curr < goal) {
        year += 1;
        curr = (curr+depo)*(100+rate)/100;
        printf("\nyear %d, balance == %d", year, curr);
    }
    printf("\n\nwe need %d years to reach the goal (%d)", year, goal);
}