#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
// #include <cs50.h>

#define FIXED_LEN 26

bool findNonAlphabetic(char prompt[]);
bool findRepeatedLetter(char prompt[]);

const char alphabet[FIXED_LEN] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        bool isLenInvalid = (strlen(argv[1]) != FIXED_LEN);
        if (isLenInvalid)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        bool findedNonAb = findNonAlphabetic(argv[1]);
        if (findedNonAb)
        {
            printf("Key must contain alphabetic characters only.\n");
            return 1;
        }
        bool findedRepetition = findRepeatedLetter(argv[1]);
        if (findedRepetition)
        {
            printf("Key must not contain letters repetition.\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: %s <key>\n", argv[0]);
        return 1;
    }
}

bool findNonAlphabetic(char prompt[])
{
    for (int i = 0; i < FIXED_LEN; i++)
    {
        char upperPrompt = toupper(prompt[i]);
        if (upperPrompt < 'A' || upperPrompt > 'Z')
        {
            return true;
        }
    }
    return false;
}

bool findRepeatedLetter(char prompt[])
{
    char newPromptArray[FIXED_LEN];
    for (int i = 1; i < FIXED_LEN; i++)
    {
        char upperPrompt = toupper(prompt[i]);
        if (newPromptArray[upperPrompt - 'A'] == 1)
        {
            return true;
        }
        newPromptArray[upperPrompt - 'A'] = 1;
    }
    return false;
}