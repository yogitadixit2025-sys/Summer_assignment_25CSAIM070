#include <stdio.h>

int main()
{
    int A[] = {1, 5, 10, 20}, B[] = {6, 7, 10, 20}, C[] = {3, 4, 10, 20, 30};
    int n1 = 4, n2 = 4, n3 = 5, i = 0, j = 0, k = 0;
    printf("Common Elements: ");
    while (i < n1 && j < n2 && k < n3) 
    {
        if (A[i] == B[j] && B[j] == C[k]) 
        {
            printf("%d ", A[i]);
            i++; j++; k++;
        }
        else if (A[i] < B[j]) 
        {
        i++;
        }
        else if (B[j] < C[k]) 
        {
            j++;
        }
        else 
        {
            k++;
        }
    }
    printf("\n");
    return 0;
}                                                                                                                                                                               }