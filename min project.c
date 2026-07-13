#include <stdio.h>

void addProduct(char items[][30], int prices[], int *count) 
{
    printf("Enter Product Name & Price: ");
    scanf("%s %d", items[*count], &prices[*count]);
    (*count)++;
}

            void displayProducts(char items[][30], int prices[], int count) 
            {
                printf("\n--- Product Catalog ---\n");
                for(int i = 0; i < count; i++) 
                printf("%d. %s - $%d\n", i + 1, items[i], prices[i]);
            }

                    int main() 
                    {
                        char catalog[50][30];
                        int prices[50], totalItems = 0,choice;
                        do 
                        {
                            printf("\n--- Mini Store ---\n1. Add Product\n2. View Catalog\n3. Exit\nEnter choice: ");
                            scanf("%d", &choice);
                            switch(choice) 
                            {
                                case 1: 
                                addProduct(catalog, prices, &totalItems); 
                                break;
                                case 2: 
                                displayProducts(catalog, prices, totalItems); 
                                break;
                                case 3: 
                                printf("Exiting...\n"); 
                                break;
                                default: 
                                printf("Invalid selection.\n");
                            }
                        } 
                        while(choice != 3);
                        return 0;
                    }