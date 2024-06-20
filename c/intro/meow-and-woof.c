#include <stdio.h>

void meow(int n);
void woof(int n);

int main (void)
{
    meow(3);
    printf("\n");
    woof(3);
}

void meow(int n)
{
    int m = 0;
    while (m < n)
    {
        printf("meow\n");
        m++;
    }
}

void woof(int n)
{
    for (int w = 0; w < 3; w++)
    {
        printf("woof\n");
    }
}