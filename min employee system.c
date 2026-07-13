#include <stdio.h>
struct Emp 
{ 
    int id; char name[30]; float salary; };
    int main() 
    {
        struct Emp emp[50]; int count = 0, choice, i;
        do 
        {
            printf("\n--- Employees ---\n1.Add\n2.Display\n3.Exit\nChoice: ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("ID, Name, Salary: ");
                scanf("%d %s %f", &emp[count].id, emp[count].name, &emp[count].salary);
                count++;
                }
                else if (choice == 2) 
                {
                    printf("\nID\tName\tSalary\n");
                    for(i = 0; i < count; i++) 
                    printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
            } 
            while(choice != 3);
            return 0;
}