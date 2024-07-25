#include <stdio.h>
// #include <stdio.h>

void draw(int h);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%i", &height);
    draw(height);
}

// recursividade: funciona devido a "pilha de chamadas"

void draw(int h)
{
    if (h <= 0)
    {
        return;
    }
    
    draw(h - 1);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}