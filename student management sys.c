#include <stdio.h>

struct Student 
{
    int id;
    char name[30];
    float marks;
};

int main() 
{
    struct Student s[20];
    int choice, i, n = 0;
    while(1) 
    {
        printf("\n1. Add Record\n2. Display Records\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) 
        {
            printf("Enter ID, Name, Marks: ");
            scanf("%d %s %f", &s[n].id, s[n].name, &s[n].marks);
            n++;
        } 
        else if(choice == 2) 
        {
            for(i = 0; i < n; i++) 
            {
                printf("ID: %d, Name: %s, Marks: %.2f\n", s[i].id, s[i].name, s[i].marks);
            }
        } 
        else 
        {
            break;
        }
    }
    return 0;
}