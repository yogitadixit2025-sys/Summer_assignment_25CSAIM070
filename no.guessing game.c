#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret, guess;
    srand(time(NULL));
    secret = (rand() % 100) + 1;
    printf("Guess a number between 1 and 100:\n");
    do 
    {
        scanf("%d", &guess);
        if (guess > secret) 
        printf("Too high! Try again: ");
        else if (guess < secret) 
        printf("Too low! Try again: ");
    } 
    while (guess != secret);
    printf("Correct! You won.\n");
    return 0;
}