#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int i, hash1[256] = {0}, hash2[256] = {0};
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++) 
    hash1[(unsigned char)str1[i]] = 1;
    for (i = 0; str2[i] != '\0'; i++) 
    hash2[(unsigned char)str2[i]] = 1;
    printf("Common characters: ");
    for (i = 0; i < 256; i++) 
    {
        if (hash1[i] && hash2[i]) 
        {
            printf("%c ", i);
        }
    }
    printf("\n");
    return 0;
}