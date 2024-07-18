#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

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
        char input[99];
        printf("plaintext:  ");
        fgets(input, sizeof(input), stdin);
        char output[99];

        int abIndex;
        char toEncrypt;
        for (int i = 0, n = strlen(input); i < n; i++)
        {
            char inputUpper = toupper(input[i]);
            if (inputUpper >= alphabet[0] && inputUpper <= alphabet[25])
            {
                if (isupper(input[i]))
                {
                    abIndex = inputUpper - alphabet[0];
                    toEncrypt = toupper(argv[1][abIndex]);
                    output[i] = toEncrypt;
                }
                else
                {
                    abIndex = inputUpper - alphabet[0];
                    toEncrypt = tolower(argv[1][abIndex]);
                    output[i] = toEncrypt;
                }
            }
            else
            {
                output[i] = input[i];
            }
        }
        printf("ciphertext: %s\n", output);
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
        if (upperPrompt < alphabet[0] || upperPrompt > alphabet[25])
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
        if (newPromptArray[upperPrompt - alphabet[0]] == 1)
        {
            return true;
        }
        newPromptArray[upperPrompt - alphabet[0]] = 1;
    }
    return false;
}