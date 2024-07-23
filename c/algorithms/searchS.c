#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char s[50];
    printf("String: ");
    scanf("%49s", s);
    for (int i = 0; i < 6; i++) {
        if (strcmp(strings[i], s) == 0) {
            printf("Found the string %s\n", s);
            return 0;
        }
    }
    printf("Not found the string\n");
    return 1;
}