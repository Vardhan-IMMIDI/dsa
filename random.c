#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int x = rand() % 10 + 1;
    printf("Guess a Number (1 - 10): ");
    while (1)
    {
        int guess;
        scanf("%d", &guess);
        if (guess == x)
        {
            printf("Your guessed correctly");
            break;
        }
        else
        {
            printf("Wrong!\nAnother Guess: ");
        }
    }
}