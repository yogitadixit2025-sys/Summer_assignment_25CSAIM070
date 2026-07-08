#include<stdio.h>
int main()
{
    int arr[100], n, i, j, max_el, max_count = 0, count;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    for(i = 0; i < n; i++)
    {
        count = 1;
    }
        for(j = i + 1; j < n; j++) 
        if(arr[i] == arr[j]) 
        count++;
        if(count > max_count)
    {
        max_count = count;
        max_el = arr[i];
    }
    printf("Max frequency element: %d\n", max_el);
    return 0;
}