#include <stdio.h>

int main() 
{
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Array must be sorted
    int n = 7, target = 25, low = 0, high = 6, mid, found;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target) 
        {
            found = mid;
            break; 
        }
        if (arr[mid] < target) 
        {
            low = mid + 1; 
        } else 
        {
            high = mid - 1; 
        }
    }
    if (found != -1) 
    {
        printf("Element found at index %d\n", found);
    } else 
    {
        printf("Element not found in the array\n");
    }
    return 0;
}