#include <stdio.h>

struct Contact 
{
    char name[30];
    char phone[15];
};

int main() 
{
    struct Contact c[20];
    int choice, i, n = 0;
    while(1) 
    {
        printf("\n1. Add Contact\n2. View Contacts\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) 
        {
            printf("Enter Name and Phone Number: ");
            scanf("%s %s", c[n].name, c[n].phone);
            n++;
        } else if(choice == 2) 
        {
            for(i = 0; i < n; i++) 
            {
                printf("Name: %s, Phone: %s\n", c[i].name, c[i].phone);
            }
        } 
        else 
        {
            break;
        }
    }
    return 0;
}