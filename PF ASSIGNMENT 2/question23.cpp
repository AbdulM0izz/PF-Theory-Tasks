#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;
    char playAgain;

    // Initialize random seed
    srand(time(0));

    do {
        // Display instructions
        printf("Welcome to the Guessing Game!\n");
        printf("Instructions: The computer has selected a random number between 1 and 100.\n");
        printf("You have 4 chances to guess the correct number. After each wrong guess, a hint will be provided.\n");

        // Computer selects a number between 1 and 100
        number = rand() % 100 + 1;

        attempts = 4;

        // Start guessing game
        while (attempts > 0) {
            printf("\nYou have %d attempts left. Guess the number: ", attempts);
            scanf("%d", &guess);

            if (guess == number) {
                printf("Congratulations! You've guessed the correct number.\n");
                break;
            } else if (guess < number) {
                printf("Your guess is too small. Try again.\n");
            } else {
                printf("Your guess is too large. Try again.\n");
            }

            attempts--;

            if (attempts == 0) {
                printf("Sorry, you've used all your attempts. The correct number was %d.\n", number);
            }
        }

        // Ask the user if they want to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
