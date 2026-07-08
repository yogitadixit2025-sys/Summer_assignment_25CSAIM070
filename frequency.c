#include<stdio.h>
int main()
{
    int arr[100], n, i, target, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to find frequency: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == target) count++;
    }
    printf("Frequency = %d\n", count);
    return 0;
}