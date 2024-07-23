#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;
    printf("Number: ");
    scanf("%i", &n);
    for (int i = 0; i < 7; i++) {
        if (n == numbers[i]) {
            printf("Found the number %i\n", n);
            return 0;
        }
    }
    printf("Not found the number\n");
    return 1;
}