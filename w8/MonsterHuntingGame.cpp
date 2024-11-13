#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

void refreshScreen(int monsterCNT, int monsterDefaultHP, int monsterHP[]) {
    // clear
    printf("\033[2J\033[H");

    // title
    printf("*** Monster Hunting Game ***\n\n");

    // print monster status
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
    /* <moved to playerTurn> printf("Player's tern: (1)single attack/7P (2)group attack/2P ...> ");*/
}

void playerTurn() {
    // ask user choice
    printf("Player's tern: (1)single attack/7P (2)group attack/2P ...> ");

    scanf("%d", &choice);

    // calculate monsterHP
    if (choice == 1) { // player attack (Single)
        printf("Which monster do you want to attack? ...> ");

        // <to mod, choose var> 
        // scanf("%d", &);

        monsterHP[die] -= 7;
    } else if (choice == 2) { // player attack (Multiple)
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] > 0) monsterHP[i] -= 2;
        }
    }
}

void playerAttack() {
    //
}

void enemyTurn() {
    // Check survival and health

    // if need to heal

    // else attack
}

void enemyAttack() {
    //
}

void enemyHeal() {
    //
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

        /*
        // wait user input
        scanf("%d", &choice);

        // calculate monsterHP
        if (choice == 1) {
            // player attack (Single)
            // <to mod> select monster
            monsterHP[die] -= 7;
        } else if (choice == 2) {
            // player attack (Multiple)
            for (int i=0;i < monsterCNT;i++) {
                if (monsterHP[i] > 0) monsterHP[i] -= 2;
            }
        }
        */

        // die check
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] <= 0) die += 1;
        }

        // game end
        if (die >= monsterCNT) break;
    }
    
}