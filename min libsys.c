#include <stdio.h>
struct Book 
{ 
    int id; char title[50], author[30]; };
    int main() 
    {
        struct Book lib[50]; int count = 0, choice, i;
        do 
        {
            printf("\n--- Library ---\n1.Add Book\n2.Display\n3.Exit\nChoice: ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("ID, Title, Author: ");
                scanf("%d %s %s", &lib[count].id, lib[count].title, lib[count].author);
                count++;
            } 
            else 
            if (choice == 2) 
            {
        
                printf("\nID\tTitle\tAuthor\n");
                for(i = 0; i < count; i++)
                printf("%d\t%s\t%s\n", lib[i].id, lib[i].title, lib[i].author);
            }
        } 
        while(choice != 3);
        return 0;
}