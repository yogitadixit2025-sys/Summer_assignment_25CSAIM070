#include<stdio.h>
int main()
{
    int arr[100], n, i, even = 0, odd = 0;
     printf("Enter size: ");
     scanf("%d", &n); 
     printf("Enter elements:\n");
     for(i = 0; i < n; i++)
     {
         scanf("%d", &arr[i]);
         if(arr[i] % 2 == 0) even++;
         else odd++;
     }
     printf("Even elements = %d\nOdd elements = %d\n", even, odd);
     return 0;
 }