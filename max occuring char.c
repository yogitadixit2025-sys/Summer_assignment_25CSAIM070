#include <stdio.h>

int main() 
{
    char str[100], max_char;
    int i, freq[256] = {0}, max = -1;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (max < freq[(unsigned char)str[i]]) 
        {
            max = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }
    printf("Maximum occurring character: %c\n", max_char);
    return 0;
}