#include <stdio.h>

int main() 
{
    int arr[] = {15, 5, 24, 8, 1, 3, 12};
    int n = 7, i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] < arr[j + 1]) 
            { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("Array in descending order: ");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }
}