#include <stdio.h>

int main() 
{
    int a[] = {1, 2, 3, 4}, b[] = {3, 4, 5, 6};
    int n1 = 4, n2 = 4, i, j;
    printf("Intersection of Arrays: ");
    for (i = 0; i < n1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            if (a[i] == b[j]) 
            {
                printf("%d ", a[i]);
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}