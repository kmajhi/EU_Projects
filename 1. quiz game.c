#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Welcome to the Quiz Game!\n\n");

    printf("Question 1: What is the capital of France?\n");
    printf("1. Paris\n");
    printf("2. London\n");
    printf("3. Rome\n");
    printf("Enter your answer (1-3): ");
    scanf("%d", &answer);
    if (answer == 1) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nQuestion 2: What is the largest planet in our solar system?\n");
    printf("1. Earth\n");
    printf("2. Mars\n");
    printf("3. Jupiter\n");
    printf("Enter your answer (1-3): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nQuestion 3: What is the chemical symbol for gold?\n");
    printf("1. Go\n");
    printf("2. Au\n");
    printf("3. Ag\n");
    printf("Enter your answer (1-3): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nYour score: %d/3\n", score);

    return 0;
}
