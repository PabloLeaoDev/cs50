#include <cs50.h>
#include <stdio.h>
#include <string.h>

int luhnAlgorithm(long number);

int main(void)
{
    long n = get_long("Number: ");
    char str[20];  
    sprintf(str, "%li", n);
    int isLegitCard = luhnAlgorithm(n);

    if (isLegitCard == 0)
    {
        printf("INVALID\n");
    }
    else if (strlen(nStr) == 16)
    {
        printf("MASTERCARD\n");
    }
    else if (strlen(nStr) == 15)
    {
        printf("AMEX\n");
    }
    else if (strlen(nStr) == 13)
    {
        printf("VISA\n");
    }
}

int luhnAlgorithm(long number)
{
    int sum = 0;
    int alternate = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = (digit % 10) + 1;
            }
        }
        sum += digit;
        alternate = !alternate;
        number /= 10;
    }
    return (sum % 10 == 0);
}

// esse código não funciona fora do ambiente do CS50