#include <stdio.h>

void refreshScreen(int monsterCNT, int monsterDefaultHP, int monsterHP[]) {
    // clear
    printf("\033[2J\033[H");

    // title
    printf("*** Monster Hunting Game ***\n\n");

    // monster status
    for (int i=0;i < monsterCNT;i++) {
        printf("Monster %d ", i+1);
        if(monsterHP[i] > 0) {
            printf("(%d) ", monsterHP[i]);
            for (int j=0;j<monsterHP[i];j++) {
                printf("*");
            }
        } else {
            printf("- DEAD -");
        }
        printf("\n");
    }
    printf("\n");

    // user move guide
    printf("Player's tern: (1)single attack/7P (2)group attack/2P ...> ");
}

int main() {
    // init monster HP
    int monsterCNT = 5, monsterDefaultHP = 10;
    int monsterHP[monsterCNT] = {};
    for (int i=0;i < monsterCNT;i++) {
        monsterHP[i] = monsterDefaultHP;
    }
    int die = 0;

    // init player status
    int atkS = 7, atkG = 2;
    int choice;

    // game loop
    while (true) {
        // refresh screen
        refreshScreen(monsterCNT, monsterDefaultHP, monsterHP);

        // wait user input
        scanf("%d", &choice);

        // calculate monsterHP
        if (choice == 1) {
            monsterHP[die] -= 7;
        } else if (choice == 2) {
            for (int i=0;i < monsterCNT;i++) {
                if (monsterHP[i] > 0) monsterHP[i] -= 2;
            }
        }

        // die check
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] <= 0) die += 1;
        }

        // game end
        if (die >= monsterCNT) break;
    }
    
}