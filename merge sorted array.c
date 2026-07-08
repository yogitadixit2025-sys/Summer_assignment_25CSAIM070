#include <stdio.h>

int main() 
{
    int arr1[5] = {1, 3, 5, 7, 9}, arr2[5] = {2, 4, 6, 8, 10}, arr3[10];
    int i = 0, j = 0, k = 0, n1 = 5, n2 = 5;
    while (i < n1 && j < n2) 
    {
        if (arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    }
    while (i < n1) arr3[k++] = arr1[i++];
    while (j < n2) arr3[k++] = arr2[j++];
    for (i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}