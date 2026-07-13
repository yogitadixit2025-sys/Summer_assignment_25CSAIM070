#include <stdio.h>

struct Item 
{
    int id, qty;
    char name[30];
    float price;
};

            int main() 
            {
                struct Item inv[50];
                int count = 0, choice, i;
                do 
                {
                    printf("\n--- Inventory ---\n1. Add Item\n2. View Inventory\n3. Exit\nEnter choice: ");
                    scanf("%d", &choice);
                    switch(choice) 
                    {
                        case 1:
                        printf("Enter ID, Name, Quantity, Price: ");
                        scanf("%d %s %d %f", &inv[count].id, inv[count].name, &inv[count].qty, &inv[count].price);
                        count++;
                        break;
                        case 2:
                        printf("\nID\tName\tQty\tPrice\n");
                        for(i = 0; i < count; i++) 
                        printf("%d\t%s\t%d\t%.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                        break;
                        case 3: 
                        printf("Exiting...\n"); 
                        break;
                        default: 
                        printf("Invalid choice!\n");
                    }
                } 
                while(choice != 3);
                return 0;
            }