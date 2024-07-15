#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <cs50.h>

double getGrade(char text[]);

int main(void) 
{
    char text[] = "One fish. Two fish. Red fish. Blue fish.";
    double grade = getGrade(text);
    printf("%f\n", grade);
}

double getGrade(char text[])
{
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (!((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')))
        {
            if (text[i] == ' ')
            {
                words++;
            }
            else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            {
                sentences++;
            }
            
        }
        else
        {
            letters++;
        }
    }

    // L é a média de letras a cada 100 palavras
    double L = (double) letters / words * 100;
    // S é a média do número de frases a cada 100 palavras
    double S = (double) sentences / words * 100;

    printf("%i\n", letters);
    printf("%i\n", words);
    printf("%i\n", sentences);
    printf("%f\n", L);
    printf("%f\n", S);
    double index = 0.0588 * L - 0.296 * S - 15.8;
    return index;
}