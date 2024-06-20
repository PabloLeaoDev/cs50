#include <stdio.h>
#include <cs50.h>

int main (void) {
    char agree = get_char("Do you agree?[y/n] ");

    if (agree == 'y' || agree == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Not agreed.\n");
    }
}

// esse código não funciona fora do ambiente do CS50