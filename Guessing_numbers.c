/*
Name : Duncan Mugambi Gitonga
Reg no: CT101/G/26547/25
Description: using while loop to guess secret number
*/
#include <stdio.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));          // seed random number generator
    secret = rand() % 20 + 1; // random number between 1 and 20

    printf("Guess the number (1 - 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else {
            printf("Congratulations! You guessed it right!\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}    