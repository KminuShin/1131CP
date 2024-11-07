#include <stdio.h>
#include <cstdlib>

int main() {
    // ---------- Initialization ---------
    constexpr int NumMonsters = 5;
    int monster[NumMonsters] = {};
    for (int i=0; i<NumMonsters; i+=1) { monster[i] = 10; }
 
    // ---------- Game starts ---------
    int die = 0;
    while(die < NumMonsters)
    {
        // ---------- Show game state ---------
        system("cls");
        printf("***Monster Hunting Game***\n\n");
 
        // ---------- Player's turn ---------
        int choice = 0;
        printf("It's your turn :(1)single attack<7P> (2)group attack<2P>\n");
        scanf("%d", &choice);
        if(choice == 1) { 
            monster[die] -= 7;
        }
        else {
            for (int i=0;i < NumMonsters;i++) {
                monster[i] -= 2;
            }
        }
 
        // ---------- Stopping criterion ---------
        system("pause");
    }
    // ---------- Game ends ---------
    printf("\nYou have killed ALL monsters!!!!!\n");
    system("pause");
 
    // ---------- Show game state ---------
    system("cls");
    printf("***Monster Hunting Game***\n\n");
    for(int i=0 ; i<NumMonsters ; i+=1)
    {
        printf("Monster %d ",i+1);
        if(monster[i] <= 0)
        {
            printf("-DEAD-\n");
        }
        else
        {
            printf("(%d)",monster[i]);
            for(int j=0 ; j<monster[i] ; j+=1)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
 
    // ---------- Player's turn ---------
    int choice = 0;
 
    printf("It's your turn :(1)single attack<7P> (2)group attack<2P>\n");
    scanf("%d", &choice);
 
    if(choice == 1)
    {
        printf("which monster do you want to attack?");
        int id = 0;
        scanf("%d", &id);
        monster[id-1] = monster[id-1]>7?monster[id-1]-7:0;
        printf("you hit monster %d by 7 points!\n", id);
    }
    else
    {
        for(int i=0 ; i<NumMonsters; i+=1)
        {
            monster[i] = monster[i]>2?monster[i]-2:0;
        }
        printf("you hit all monsters by 2 points!\n");
    }
 
    // ---------- Stopping criterion ---------
    die = 0;
    for(int i=0 ; i<NumMonsters ; i+=1)
    {
        if(monster[i] <= 0)
        {
            die += 1;
        }
    }
 
}