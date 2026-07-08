#include<stdio.h>
int main()
{
    int arr[100], n, i, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    if(arr[i] != 0) arr[count++] = arr[i];
    }
    while(count < n) arr[count++] = 0;
    printf("Result: ");
    for(i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
}