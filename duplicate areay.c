#include<stdio.h>
int main()
{
    int arr[100], n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Duplicate elements: ");
    for(i = 0; i < n; i++)
    {
        bfor(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0; 
}