#include <stdio.h>
#include <cs50.h>

int size(void);

int main (void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// esse código não funciona fora do ambiente do CS50