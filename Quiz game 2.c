#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int score;
} Player;

int main() {
    Player player;
    player.score = 0;

    printf("********************************************\n");
    printf("*********** QUIZ GAME ***********************\n");
    printf("********************************************\n\n");

    printf("Enter your name: ");
    fgets(player.name, MAX_NAME_LENGTH, stdin);
    player.name[strcspn(player.name, "\n")] = '\0'; // remove trailing newline

    int choice;
    int previousScore = 0; // Variable to store the previous game score
    int gamePlayed = 0; // Variable to track if a game has been played before

    do {
        printf("\n____________________________________________\n");
        printf("************* MAIN MENU *********************\n");
        printf("____________________________________________\n\n");
        printf("1. Start Game\n");
        printf("2. View Score\n");
        printf("3. Exit\n");

        printf("\nEnter your choice (1-3): ");
        scanf("%d", &choice);
        getchar(); // consume the newline character

        switch (choice) {
            case 1: {
                printf("\n************ START GAME *******************\n\n");
                printf("Question 1: What is the capital of France?\n");
                printf("A. Paris\n");
                printf("B. London\n");
                printf("C. Berlin\n");
                printf("D. Rome\n");

                char answer1;
                printf("\nEnter your answer (A, B, C, or D): ");
                scanf("%c", &answer1);
                getchar(); // consume the newline character

                if (answer1 == 'A' || answer1 == 'a') {
                    printf("Correct!\n");
                    player.score += 10;
                } else {
                    printf("Wrong answer!\n");
                }

                printf("\nQuestion 2: Which planet is known as the Red Planet?\n");
                printf("A. Mars\n");
                printf("B. Venus\n");
                printf("C. Jupiter\n");
                printf("D. Saturn\n");

                char answer2;
                printf("\nEnter your answer (A, B, C, or D): ");
                scanf("%c", &answer2);
                getchar(); // consume the newline character

                if (answer2 == 'A' || answer2 == 'a') {
                    printf("Correct!\n");
                    player.score += 10;
                } else {
                    printf("Wrong answer!\n");
                }

                printf("\nQuestion 3: Which country is home to the kangaroo?\n");
                printf("A. Australia\n");
                printf("B. Brazil\n");
                printf("C. Canada\n");
                printf("D. South Africa\n");

                char answer3;
                printf("\nEnter your answer (A, B, C, or D): ");
                scanf("%c", &answer3);
                getchar(); // consume the newline character

                if (answer3 == 'A' || answer3 == 'a') {
                    printf("Correct!\n");
                    player.score += 10;
                } else {
                    printf("Wrong answer!\n");
                }

                printf("\n********************************************\n");
                printf("************* GAME OVER *********************\n");
                printf("********************************************\n");
                printf("Player: %s\n", player.name);
                printf("Score: %d\n\n", player.score);

                // Update the previous game score and mark that a game has been played
                previousScore = player.score;
                gamePlayed = 1;

                break;
            }
            case 2: {
                printf("\n************ VIEW SCORE ********************\n\n");
                
                if (gamePlayed) {
                    printf("Previous Game Score:\n");
                    printf("Player: %s\n", player.name);
                    printf("Score: %d\n\n", previousScore);
                } else {
                    printf("No previous game score found. Play a game first.\n\n");
                }
                
                break;
            }
            case 3: {
                printf("\n************** EXIT ************************\n\n");
                printf("Thank you for playing! Goodbye, %s!\n\n", player.name);
                break;
            }
            default: {
                printf("\nInvalid choice. Please enter a number from 1 to 3.\n");
                break;
            }
        }
    } while (choice != 3);

    return 0;
}

