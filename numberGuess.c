#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exitMessage()
{
    printf("Nice try!");
}
int main()
{

    int guess, attempts, a, random;
    char ans;

    printf("==========WELCOME TO GUESSING GAME!==========\n");
    printf("I have selected a number between 1-100\n");
    printf("Can you guess it?\n");

    do
    {
      // To seed the random num and automatically put it on rand function
        
        random = rand() % 100 + 1;
     // Number of attempts
        attempts = 0;

        printf("Enter your guess number: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > random)
        {
            printf("Your guess is too high!");
        }
        else if (guess < random)
        {
            printf("Your guess is too low!");
        }
        else if (guess == random)
        {
            printf("Congratulations! you guessed it correctly!\n");
            printf("Your numbers of attempts: %d\n", attempts);
        }
        else
        {
            printf("Invalid!");
        }
        printf("\nDo you want to guess again? (Y/N): ");
        scanf(" %c", &ans);
    } while (ans == 'y' || ans == 'Y');

    exitMessage();

    return 0;
}