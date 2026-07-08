#include <stdio.h>

int main() 
{
    char str[100];
    int i, j = 0, hash[256] = {0};
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (hash[(unsigned char)str[i]] == 0) 
        {
            hash[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    printf("Result: %s\n", str);
    return 0;
}