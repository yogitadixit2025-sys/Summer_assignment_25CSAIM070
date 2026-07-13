#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int choice;
    do 
    {
        printf("\n--- String Operations ---\n1. Length\n2. Concatenate\n3. Compare\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch(choice) 
        {
            case 1:
            printf("Enter string: "); 
            fgets(str1, sizeof(str1), stdin); 
            str1[strcspn(str1, "\n")] = 0;
            printf("Length: %lu\n", 
            strlen(str1));
            break;
            case 2:
            printf("Enter first string: "); 
            fgets(str1, sizeof(str1), stdin); 
            str1[strcspn(str1, "\n")] = 0;
            printf("Enter second string: "); 
            fgets(str2, sizeof(str2), stdin); 
            str2[strcspn(str2, "\n")] = 0;
            strcat(str1, str2); 
            printf("Concatenated: %s\n", str1);
            break;
            case 3:
            printf("Enter first string: "); 
            fgets(str1, sizeof(str1), stdin); 
            str1[strcspn(str1, "\n")] = 0;
            printf("Enter second string: "); 
            fgets(str2, sizeof(str2), stdin); 
            str2[strcspn(str2, "\n")] = 0;
            printf(strcmp(str1, str2) == 0 ? "Equal.\n" : "Not equal.\n");
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