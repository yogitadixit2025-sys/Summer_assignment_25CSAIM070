#include <stdio.h>

int main() 
{
    int choice;
    float balance = 5000.0, amount;
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1: 
        printf("Balance: $%.2f\n", balance); 
        break;
        case 2: 
        printf("Enter deposit amount: "); 
        scanf("%f", &amount); 
        balance += amount; 
        printf("Updated balance: $%.2f\n", balance); 
        break;
        case 3: 
        printf("Enter withdrawal amount: "); 
        scanf("%f", &amount); 
        if (amount <= balance) 
        {
            balance -= amount;
            printf("Remaining balance: $%.2f\n", balance);
        } 
        else 
        printf("Insufficient balance.\n");
        break;
        default: 
        printf("Exiting system.\n");
    }
    return 0;
}