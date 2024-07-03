#include <stdio.h>
#include <cs50.h>

const int N = 3;

int main(void)
{
    int scores[N];
    int avg = 0;
    for (int i = 0; i < N; i++) {
        scores[i] = get_int("Score: ");
        avg += scores[i];
    }

    printf("Average: %f\n", avg / (float) N);
}
// esse código não funciona fora do ambiente do CS50