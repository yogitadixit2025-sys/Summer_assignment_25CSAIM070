#include<stdio.h>
int main()
{
    int arr[100], n, i;
     printf("Enter size: ");
     scanf("%d", &n);
     printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
     } 
     printf("Array elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return0;
 }
                                                            o