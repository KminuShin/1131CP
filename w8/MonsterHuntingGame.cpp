#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

void refreshScreen(int monsterCNT, int monsterDefaultHP, int monsterHP[], int playerHealth) {
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

    // print player status
    
    printf("Player ");
    if(playerHealth > 0) {
        printf("%d ", playerHealth);
        for (int j=0;j<playerHealth;j++) {
            printf("*");
        }
    } else {
        printf("- DEAD -");
    }
    printf("\n");
    printf("\n");

    // user move guide
    /* <moved to playerTurn> printf("Player's tern: (1)single attack/7P (2)group attack/2P ...> ");*/
}

void playerAttack(int choice, int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG, int playerHealth) {
    if (choice == 1) { // single atk
        int target;
        printf("which monster do you want to attack? ...> ");
        scanf("%d", &target);
        if (target <= monsterCNT) {
            monsterHP[target-1] -= atkS;
            printf("\n");
            printf("you attacked Monster(%d), %d points!\n", target, atkS);
        } else {
            refreshScreen(monsterCNT, monsterDefaultHP, monsterHP, playerHealth);
            printf("No such target: %d\n", target);
            playerAttack(choice, monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG, playerHealth);
        }
    } else if (choice == 2) { // group atk
        printf("\n");
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] > 0) {
                monsterHP[i] -= atkG;
                printf("you attacked Monster(%d), %d points!\n", i, atkG);
            }
        }
    }
    printf("\n");
}

void playerTurn(int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG, int playerHealth) {
    int choice;

    printf("Player's turn: (1)single attack/7P (2)group attack/2P ...> ");

    scanf("%d", &choice);

    playerAttack(choice, monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG, playerHealth);
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

void enemyTurn(int monsterCNT, int monsterDefaultHP, int monsterHP[], int atkS, int atkG, int playerHealth) {
    // Check survival and health
    int attackCondition;
    for (int i=0;i < monsterCNT;i++) {
        attackCondition = 0;
        if (monsterHP[i] <= 0) continue;
        for (int j=0;j < monsterCNT;j++) {
            attackCondition += 1;
            if (monsterHP[j] <= 3 && monsterHP[j] > 0) {
                monsterHP[j] += 1;
                attackCondition = 0;
                printf("Monster(%d) healed monster(%d)\n", i, j);
                break;
            }
        }
        if (attackCondition >= monsterCNT) {
            playerHealth -= 1;
            printf("Monster(%d) attacked you, your health is %d\n", i, playerHealth);
        }
    }

    // if need to heal

    // else attack
}

int main() {
    // Disable input buffering, gemini told me this can let terminal show user input but it doesn't work wtf
    // I didn't even use anything like getchar() whyyyyyyyyyy
    // I can't finish this I'm so sad
    // setbuf(stdin, NULL);

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
        refreshScreen(monsterCNT, monsterDefaultHP, monsterHP, playerHealth);

        // player's turn
        playerTurn(monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG, playerHealth);

        // monster's turn
        enemyTurn(monsterCNT, monsterDefaultHP, monsterHP, atkS, atkG, playerHealth);
    
        printf("press ENTER to continue");
        getchar();
        getchar();

        // player die check
        if (playerHealth <= 0) {
            refreshScreen(monsterCNT, monsterDefaultHP, monsterHP, playerHealth);
            printf("you lose\n");
            break;
        }
        
        // monster die check
        die = 0;
        for (int i=0;i < monsterCNT;i++) {
            if (monsterHP[i] <= 0) die += 1;
        }

        // game end check
        if (die >= monsterCNT) {
            refreshScreen(monsterCNT, monsterDefaultHP, monsterHP, playerHealth);
            printf("game clear! congrats!!\n");
            break;
        }
    }
}