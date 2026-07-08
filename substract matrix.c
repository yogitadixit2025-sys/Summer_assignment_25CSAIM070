#include <stdio.h>

int main() 
{
    int A[2][2] = {{5, 8}, {9, 6}}, B[2][2] = {{1, 2}, {3, 4}}, diff[2][2];
    int i, j;
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}