#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int maxValue = 10;
    srand(time(NULL)); // Seed the pseudo-random number generator with the current time
    int randomNumber = rand() % maxValue + 1; // Generate a random number between 1 and maxValue

    printf("Guess a number between 1 and %d:\n", maxValue);

    int input;
    int result;

    while (1) { // Infinite loop, will exit only when the correct number is guessed
        result = scanf("%d", &input); // Read user input

        if (result != 1) { // Check if scanf successfully read an integer
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else if (input < 1 || input > maxValue) { // Check if input is within the valid range
            printf("Please enter a number between 1 and %d.\n", maxValue);
        } else if (input == randomNumber) { // Check if the guess is correct
            printf("You win! The correct number was %d.\n", randomNumber);
            break; // Exit the loop
        } else if (input < randomNumber) { // Provide a hint if the guess is too low
            printf("Higher! Try again:\n");
        } else { // Provide a hint if the guess is too high
            printf("Lower! Try again:\n");
        }
    }

    printf("Thank you for playing!\n");
    return 0;
}