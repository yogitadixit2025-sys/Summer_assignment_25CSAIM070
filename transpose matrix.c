#include <stdio.h>

int main() 
{
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}}, trans[3][2];
    int i, j;
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}