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

void draw(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}