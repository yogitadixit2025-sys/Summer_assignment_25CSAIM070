#include <stdio.h>

int main() 
{
    int ans, score = 0;
    printf("Q1. What is the size of int in C (typically)?\n1. 2 bytes\n2. 4 bytes\n3. 8 bytes\nYour choice: ");
    scanf("%d", &ans);
    if (ans == 2) score++;
    printf("Q2. Which keyword is used to exit a loop?\n1. break\n2. continue\n3. exit\nYour choice: ");
    scanf("%d", &ans);
    if (ans == 1) score++;
    printf("Quiz Over. Total Score: %d/2\n", score);
    return 0;
}