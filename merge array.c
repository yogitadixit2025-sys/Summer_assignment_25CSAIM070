#include <stdio.h>

int main()
 {
    int arr1[] = {1, 3, 5}, arr2[] = {2, 4, 6};
    int n1 = 3, n2 = 3, i, j, merged[6];
    for (i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) 
    {
        merged[i + j] = arr2[j];
    }
    printf("Merged Array: ");
    for (i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}