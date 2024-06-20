#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_string("What's your name? ");
    printf("Hey %s\n", name);
}
// esse código não funciona fora do ambiente do CS50