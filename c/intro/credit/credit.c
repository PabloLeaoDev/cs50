#include <cs50.h>
#include <stdio.h>

int luhnAlgorithm(long number);

int main(void)
{
    long n = get_long("Number: ");
    int isLegitCard = luhnAlgorithm(n);

    if (isLegitCard == 0)
    {
        printf("INVALID\n");
    }

    // descobrir como saber o quantidade de números que há no long
    else if ()

}

int luhnAlgorithm(long number)
{
    int uni = number % 10;
    int dec = (number % 100) / 10; //
    int cen = (number % 1000) / 100;
    int mil = (number % 10000) / 1000; //
    int milD = (number % 100000) / 10000;
    int milC = (number % 1000000) / 100000; //
    int mi = (number % 10000000) / 1000000;
    int miD = (number % 100000000) / 10000000; //
    int miC = (number % 1000000000) / 100000000;
    int bi = (number % 10000000000) / 1000000000; //
    int biD = (number % 100000000000) / 10000000000;
    int biC = (number % 1000000000000) / 100000000000; //
    int tri = (number % 10000000000000) / 1000000000000;
    int triD = (number % 100000000000000) / 10000000000000; //
    int triC = (number % 1000000000000000) / 100000000000000;
    int qua = (number % 10000000000000000) / 1000000000000000; //

    int dec1 = 0;
    int mil1 = 0;
    int milC1 = 0;
    int miD1 = 0;
    int bi1 = 0;
    int biC1 = 0;
    int triD1 = 0;
    int qua1 = 0;

    dec = dec * 2;
    mil = mil * 2;
    milC = milC * 2;
    miD = miD * 2;
    bi = bi * 2;
    biC = biC * 2;
    triD = triD * 2;
    qua = qua * 2;

    if (dec > 4)
    {
        dec1 = dec % 10;
        dec = dec / 10;
    }
    if (mil > 4)
    {
        mil1 = mil % 10;
        mil = mil / 10;
    }
    if (milC > 4)
    {
        milC1 = milC % 10;
        milC = milC / 10;
    }
    if (miD > 4)
    {
        miD1 = miD % 10;
        miD = miD / 10;
    }
    if (bi > 4)
    {
        bi1 = bi % 10;
        bi = bi / 10;
    }
    if (biC > 4)
    {
        biC1 = biC % 10;
        biC = biC / 10;
    }
    if (triD > 4)
    {
        triD1 = triD % 10;
        triD = triD / 10;
    }
    if (qua > 4)
    {
        qua1 = qua % 10;
        qua = qua / 10;
    }

    int x = dec + dec1 + mil + mil1 + milC + milC1 + miD + miD + bi + bi1 + biC + biC1 + triD + triD1 + qua + qua1;
    int y = uni + cen + milD + mi + miC + biD + tri + triC;
    int result = x + y;

    if (result % 10 == 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return result;
}

// esse código não funciona fora do ambiente do CS50