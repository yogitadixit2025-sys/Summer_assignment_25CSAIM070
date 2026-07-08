#include <stdio.h>

int main() 
{
    int a[] = {1, 2, 3, 4}, b[] = {3, 4, 5, 6};
    int n1 = 4, n2 = 4, i, j, flag=0;
    printf("Union of Arrays: ");
    for (i = 0; i < n1; i++) 
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n2; i++) 
    {
        flag = 0;
        for (j = 0; j < n1; j++) 
        {
            if (b[i] == a[j]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");
    return 0;
}