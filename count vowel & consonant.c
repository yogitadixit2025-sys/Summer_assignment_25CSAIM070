#include <stdio.h>
int main() 
{
    char str[] = "Paytm";
    int i = 0, vowels = 0, consonants = 0;
    while (str[i] != '\0') 
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == '||')
            {
                vowels++;
            } 
                else 
            {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}