#include<stdio.h>
int main()
{
    int arr[100], n, start, end, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    for(start = 0; start < n; start++)
    scanf("%d", &arr[start]);
    start = 0;
    end = n - 1;
    while(start < end)
    {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
    printf("Reversed array: ");
    for(start = 0; start < n; start++) 
    printf("%d ", arr[start]);
    printf("\n");
    return 0;
}