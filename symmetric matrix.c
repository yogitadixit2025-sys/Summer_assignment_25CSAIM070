#include <stdio.h>

int main() 
{
    int mat[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int i, j, isSymmetric = 1;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            if (mat[i][j] != mat[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric) 
    printf("The matrix is symmetric.\n");
    else 
    printf("The matrix is not symmetric.\n");
    return 0;
}