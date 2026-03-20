#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secretNumber, guess;
    
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Guess a number between 1 and 100:\n");

    while (1) {
        printf("Enter your number: ");
        scanf("%d", &guess);

        if (guess < secretNumber) 
        {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) 
        {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly!\n", secretNumber);
            break; 
        }
    }

    return 0;
}
