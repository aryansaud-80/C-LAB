// Write a c program to accept batting information of a cricket team using structure. It contains the player name and runs scored by the player. Calculate total run scored by the cricket team

#include<stdio.h>

#define MAX_PLAYERS 11

struct cricketTeam {
    char name[100];
    int runs;
}player[11];

int main() {
    int totalPlayersBatted;
    do {
        printf("Enter the total number of players who batted (minimum 2): ");
        scanf("%d", &totalPlayersBatted);

        if (totalPlayersBatted < 2 || totalPlayersBatted > 11) {
            printf("Number of players who batted must be between 2 and 11\n");
        }
    } while (totalPlayersBatted < 2 || totalPlayersBatted > 11);

    printf("\nEnter batting information:\n");
    for (int i = 0; i < totalPlayersBatted; i++) {
        printf("Enter the name of player %d: ", i + 1);
        scanf("%s", player[i].name);

        printf("Enter the runs scored by player %d: ", i + 1);
        scanf("%d", &player[i].runs);

        printf("\n");
    }

    int totalRun = 0;
    for (int i = 0; i < totalPlayersBatted; i++) {
        totalRun += player[i].runs;
    }

    printf("Total runs scored by the cricket team is: %d\n", totalRun);

    return 0;
}
