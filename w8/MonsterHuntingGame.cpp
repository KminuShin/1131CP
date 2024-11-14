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

void playerAttack(int choice, int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG) {
    if (choice == 1) { // single atk
        int target;
        printf("which monster do you want to attack? ...> ");
        scanf("%d", &target);
        if (target <= monsterCNT) {
            monsterHP[target-1] -= atkS;
        } else {
            refreshScreen(monsterCNT, monsterDefaultHP, monsterHP);
            printf("No such target: %d\n", target);
            playerAttack(choice, monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG);
        }
    } else if (choice = 2) { // group atk
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] > 0) {monsterHP[i] -= atkG;}
        }
    }
}

void playerTurn(int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG) {
    int choice;

    printf("Player's tern: (1)single attack/7P (2)group attack/2P ...> ");

    scanf("%d", &choice);

    playerAttack(choice, monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG);
}

/*
// abandoned, to avoid more complex situation like playerturn and playeratk

void enemyAttack(int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG) {
    //
}

void enemyHeal() {
    //
}
*/

void enemyTurn(int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG) {
    // Check survival and health
    int attackCondition;
    for (int i=0;i < monsterCNT;i++) {
        attackCondition = 0;
        for (int j=0;j < monsterCNT;j++) {
            attackCondition += 1;
            if (monsterHP[j] <= 3) {
                monsterHP[j] += 1;
                attackCondition = 0;
                break;
            }
        }
        if (attackCondition >= monsterCNT) {
            // attack code here
        }
    }

    // if need to heal

    // else attack
}

int main() {
    // Disable input buffering, gemini told me this can let terminal show user input but it doesn't work wtf
    // I didn't even use anything like getchar() whyyyyyyyyyy
    // I can't finish this I'm so sad
    setbuf(stdin, NULL);

    // init monster HP
    int monsterCNT = 5, monsterDefaultHP = 10;
    int monsterHP[monsterCNT] = {};
    for (int i=0;i < monsterCNT;i++) {
        monsterHP[i] = monsterDefaultHP;
    }
    int die = 0;

    // init player status
    int atkS = 7, atkG = 2;
    int playerHealth = 30;
    int choice;

    // game loop
    while (true) {
        // <!to rm, tst> wait user input
        // getchar();
        // system("pause");

        // refresh screen
        refreshScreen(monsterCNT, monsterDefaultHP, monsterHP);

        // player's turn
        playerTurn(monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG);

        // monster's turn
        // enemyTurn();

        // die check
        die = 0;
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] <= 0) die += 1;
        }

        // game end check
        if (die >= monsterCNT) {break;}
    }

    refreshScreen(monsterCNT, monsterDefaultHP, monsterHP);
    printf("game clear! congrats!!\n");
    
}