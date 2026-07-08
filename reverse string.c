#include <stdio.h>
int main() 
{
    char str[] = "Adobe";
    int i = 0, j = 0;
    char temp;
    while (str[j] != '\0') 
    j++;
    j--;
    while (i < j) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
    }