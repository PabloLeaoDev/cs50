#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <cs50.h>

char alphabet[26];
const int lattersValues[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
        // printf("%c ", alphabet[i]);
    }
    char name[] = "Pablo";
    int sum = 0;
    for (int j = 0, n = strlen(name); j < n; j++)
    {
        sum += tolower(name[j]);
    }
    printf("%i", sum);
}