#include <stdio.h>

struct Book 
{
    int id;
    char title[35];
    char author[30];
};
int main() 
{
    struct Book b[20];
    int choice, i, n = 0;
    while(1) 
    {
        printf("\n1. Add Book\n2. View Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) 
        {
            printf("Enter Book ID, Title, Author: ");
            scanf("%d %s %s", &b[n].id, b[n].title, b[n].author);
            n++;
        } else if(choice == 2) 
        {
            for(i = 0; i < n; i++) 
            {
                printf("ID: %d, Title: %s, Author: %s\n", b[i].id, b[i].title, b[i].author);
            }
        } 
        else 
        {
            break;
        }
    }
    return 0;
}