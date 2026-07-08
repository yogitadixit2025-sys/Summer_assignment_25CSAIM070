#include <stdio.h>

int main() 
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}}, B[3][2] = {{7, 8}, {9, 10}, {11, 12}}, res[2][2];
    int i, j, k;
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            res[i][j] = 0;
            for (k = 0; k < 3; k++) 
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}