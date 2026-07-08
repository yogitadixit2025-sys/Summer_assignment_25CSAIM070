#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[200], longest[50], current[50];
    int i = 0, j = 0, max_len = 0, curr_len = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    while (sentence[i] != '\0') 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') 
        {
            current[j++] = sentence[i];
            curr_len++;
        } 
        else 
        {  
            current[j] = '\0';
            if (curr_len > max_len) 
        {
            max_len = curr_len;
            strcpy(longest, current);
        }
        j = 0;
        curr_len = 0;
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}