#include <stdio.h>

int main() 
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, sum;
    for (j = 0; j < 3; j++) 
    {
        sum = 0;
        for (i = 0; i < 3; i++) 
        {
            sum += mat[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, sum);
    }
    return 0;
}