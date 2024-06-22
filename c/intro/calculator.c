#include <stdio.h>
#include <cs50.h>

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
float div(float a, float b);

int main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    char operator = get_char("operator: ");

    if (operator == '+')
    {
        printf("%i\n", add(x, y));
    }
    else if (operator == '-')
    {
        printf("%i\n", sub(x, y));
    }
    else if (operator == '*')
    {
        printf("%i\n", mult(x, y));
    }
    else if (operator == '/')
    {
        printf("%.3f\n", div((float) x, (float) y));
    }
    else
    {
        printf("Choice a valid operator!\n");
    }
}

int add(int a, int b) 
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}