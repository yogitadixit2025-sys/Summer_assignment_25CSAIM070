#include <stdio.h>

struct Employee 
{
    int id;
    char name[30];
    char dept[20];
};

int main() {
struct Employee e[20];
int choice, i, n = 0;
while(1) 
{
    printf("\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter choice: ");
    scanf("%d", &choice);
    if(choice == 1) 
    {
        printf("Enter ID, Name, Department: ");
        scanf("%d %s %s", &e[n].id, e[n].name, e[n].dept);
        n++;
    } 
    else if(choice == 2) 
    {
        for(i = 0; i < n; i++) 
        {
            printf("ID: %d, Name: %s, Dept: %s\n", e[i].id, e[i].name, e[i].dept);
        }
    } 
        else 
    {
        break;
    }
}
return 0;
}