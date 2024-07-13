#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <cs50.h>

int takeSum(char name[]);

char alphabet[26];
const int lattersValues[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
    }
    char name[] = "Pablo";
    char name1[] = "Raimundo";
    int sum = takeSum(name);
    int sum1 = takeSum(name1);
    printf("A soma da string \"%s\" é %i\n", name, sum);
    printf("A soma da string \"%s\" é %i\n", name1, sum1);
    if (sum == sum1) 
    {
        printf("Tie!\n");
    } 
    else
    {
        if (sum > sum1)
        {
            printf("Player 1 wins!\n");
        }
        else
        {
            printf("Player 2 wins!\n");
        }
    }
}

int takeSum(char name[])
{
    int sum = 0;
    for (int j = 0, n = strlen(name); j < n; j++)
    {
        for (int p = 'a', m = tolower(name[j]); p <= m; p++)
        {
            if (p == m)
            {
                sum += lattersValues[m - 'a'];
            }
        }
    }
    return sum;
}