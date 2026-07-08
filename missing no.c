#include<stdio.h>
int main()
{
    int arr[100], n, i, total_sum = 0, actual_sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    total_sum = (n * (n + 1)) / 2;
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    printf("Missing number: %d\n", total_sum - actual_sum);
    return 0;
}