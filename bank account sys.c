#include <stdio.h>

int main() 
{
    int choice;
    double balance = 0.0, amt;
    while(1) 
    {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) 
        {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amt);
            balance += amt;
        } 
        else if(choice == 2) 
        {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amt);
            if(amt <= balance) 
            {
                balance -= amt;
            } 
            else 
            {
                printf("Insufficient Balance!\n");
            }
        } 
        else if(choice == 3) 
        {
            printf("Current Balance: %.2f\n", balance);
        } 
        else 
        {
            break;
        }
        return 0;
    }
 }