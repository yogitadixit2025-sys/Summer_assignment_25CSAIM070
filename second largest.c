#include<stdio.h>
int main()
{
    int arr[100], n, i, max = -2147483648, sec_max = -2147483648;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > max) 
        {
            sec_max = max;
            max = arr[i];
        } 
        else if(arr[i] > sec_max && arr[i] != max)
        {
        sec_max = arr[i];
        }
    }

    if(sec_max == -2147483648) printf("No second largest element\n");
    else printf("Second largest element = %d\n", sec_max); 
    return 0;
}