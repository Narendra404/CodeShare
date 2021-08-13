/*
Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, and 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.
*/
#include <stdio.h>

int main(void)
{
    int a, b, n = 21;
    printf("\tMatchStick Game\t\n");
    printf("There are 21 matchsticks\n");
    printf("We take turns to pick 1, 2, 3 or 4 matchsticks.\nThe one who picks the last matchstick loses.\n");
    printf("You first.\n");
    while(n > 1)
    {
        printf("Please enter 1, 2, 3 or 4 for the number of matchsticks you want to pick :\n");
        scanf("%d", &a);
        if ((a != 1) && (a != 2) && (a != 3) && (a != 4))
        {
            printf("You entered a wrong choice.\n");
            printf("Please choose either 1, 2, 3 or 4 in the next game.\n");
            return 1;
        }
        printf("You picked %d matchsticks.\n", a);
        n = n - a;
        printf("There are %d matchsticks left.\n", n);
        printf("Its my turn now.\nI choose to pick %d matchsticks.\n", 5 - a);
        b = 5 - a;
        n = n - b;
        printf("There are %d matchsticks left.\n", n);
    }
    printf("You chose 1 matchstick.\nThere are zero matchsticks left.\nI won.\n");
    return 0;
}
