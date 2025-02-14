#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int number, guess, attempts = 0;
    const int MAX_ATTEMPTS = 10;
    const int LOWER_BOUND = 1;
    const int UPPER_BOUND = 100;
    srand(time(0));
    number = (rand() % (UPPER_BOUND - LOWER_BOUND + 1)) + LOWER_BOUND;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", LOWER_BOUND, UPPER_BOUND);

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return;
        }
    }

    printf("Sorry, you've used all %d attempts. The number was %d.\n", MAX_ATTEMPTS, number);
}

int main() {
    char playAgain;

    do {
        playGame();
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing! Goodbye.\n");
    return 0;
}

