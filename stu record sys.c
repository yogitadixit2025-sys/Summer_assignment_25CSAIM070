#include <stdio.h>

int main() 
{
    int roll[50], n = 0, choice, i;
    char names[50][30];
    float marks[50];
    do 
    {
        printf("\n--- Student Records ---\n1. Add Student\n2. Display All\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
            printf("Enter Roll No, Name, Marks: ");
            scanf("%d %s %f", &roll[n], names[n], &marks[n]);
            n++;
            break;
            case 2:
            printf("\nRoll No\tName\tMarks\n");
            for(i = 0; i < n; i++) 
            printf("%d\t%s\t%.2f\n", roll[i], names[i], marks[i]);
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