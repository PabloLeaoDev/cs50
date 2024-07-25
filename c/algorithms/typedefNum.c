#include <stdio.h>
#include <string.h>

int main(void)
{
    typedef struct
    {
        int n1;
        double n2;
    }
    numbers;
    
    numbers nums[3];

    nums[0].n1 = 1;
    nums[0].n2 = 2;

    nums[1].n1 = 3;
    nums[1].n2 = 4;

    nums[2].n1 = 5;
    nums[2].n2 = 6;

    printf("Numbers: %i", nums);
}