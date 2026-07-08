#include <stdio.h>

int main() 
{
    int choice, available = 50, req;
    while(1) 
    {
        printf("\n1. Book Tickets\n2. View Available Tickets\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) 
        {
            printf("Enter number of tickets to book: ");
            scanf("%d", &req);
            if(req <= available) 
            {
                available -= req;
                printf("Successfully booked %d tickets.\n", req);
            } 
            else 
            {
                printf("Only %d tickets left!\n", available);
            }
        } 
        else if(choice == 2) 
        {
            printf("Available Seats: %d\n", available);
        } 
        else 
        {
            break;
        }
    }
    return 0;
}