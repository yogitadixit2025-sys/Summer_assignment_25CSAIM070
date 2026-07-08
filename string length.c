#include <stdio.h>
int main() 
{
    char str[] = "Microsoft";
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    printf("Length of string: %d\n", length);
    return 0;
}