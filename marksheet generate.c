#include <stdio.h>

int main() 
{
    char name[30];
    int roll, m1, m2, m3, total;
    float avg;
    printf("Enter Roll No and Student Name: ");
    scanf("%d %s", &roll, name);
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    avg = total / 3.0;
    printf("\n============ MARKSHEET ============\n");
    printf("Roll No: %d\nName: %s\n", roll, name);
    printf("Subject 1: %d\nSubject 2: %d\nSubject 3: %d\n", m1, m2, m3);
    printf("Total Marks: %d\nAverage: %.2f\n", total, avg);
    printf("===================================\n");
    return 0;
}