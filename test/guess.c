#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, dice;

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to the Dice Roll Guessing Game!\n");

    while (1) {
        printf("Enter your guess (1-6), or 0 to exit: ");
        scanf("%d", &guess);

        if (guess == 0) {
            printf("Thanks for playing! Goodbye!\n");
            break;
        }

        if (guess < 1 || guess > 6) {
            printf("Invalid guess! Please guess a number between 1 and 6.\n");
            continue;
        }

        // Roll the dice (random number between 1 and 6)
        dice = (rand() % 6) + 1;

        printf("The dice rolled: %d\n", dice);

        if (guess == dice) {
            printf("Congratulations! You guessed it right!\n");
        } else {
            printf("Sorry, better luck next time.\n");
        }
    }

    return 0;
}
