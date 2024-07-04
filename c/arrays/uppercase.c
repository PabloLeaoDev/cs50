#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <cs50.h>

int main(void)
{
    // string s = get_string("Before: ");
    char s[] = "Pablo";
    printf("Before: %s\n", s);
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // if is lowercase
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    // or
    printf("After (toupper): ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}