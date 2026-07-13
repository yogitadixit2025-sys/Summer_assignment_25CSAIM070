#include <stdio.h>

void display(int arr[], int n) 
{
    printf("Array elements: ");
    for(int i = 0; i < n; i++) 
    printf("%d ", arr[i]);
    printf("\n");
}

            int main() 
            {
                int arr[100], n = 0, choice, element, pos, i;
                do 
                {
                    printf("\n--- Array Operations ---\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
                    scanf("%d", &choice);
                    switch(choice) 
                    {
                        case 1:
                        printf("Enter element and position (0 to %d): ", n);
                        scanf("%d %d", &element, &pos);
                        if (pos >= 0 && pos <= n) 
                        {
                            for(i = n; i > pos; i--) 
                            arr[i] = arr[i-1];
                            arr[pos] = element; n++;
                        } 
                        else 
                        printf("Invalid position!\n");
                        break;
                        case 2:
                        printf("Enter position to delete (0 to %d): ", n - 1);
                        scanf("%d", &pos);
                        if (pos >= 0 && pos < n) 
                        {
                            for(i = pos; i < n - 1; i++) 
                            arr[i] = arr[i+1];
                            n--;
                        } 
                        else 
                        printf("Invalid position!\n");
                        break;
                        case 3: 
                        display(arr, n); 
                        break;
                        case 4: 
                        printf("Exiting...\n"); 
                        break;
                        default: 
                        printf("Invalid choice!\n");
                    }
                } 
                while(choice != 4);
                return 0;
            }