#include <stdio.h>
#include <string.h>
#include <ctype.h>
// #include <cs50.h>

int getGrade(char text[]);

int main(void) 
{
    char text[] = "When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.";
    int grade = getGrade(text);
    
    if (grade >= 1 && grade <= 16)
    {
        printf("Grade %i\n", grade);
    }
    else 
    {
        if (grade < 1)
        {
            printf("Before Grade 1\n");
        }
        else
        {
            printf("Grade 16+\n");
        }
    }
}

int getGrade(char text[])
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

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int indexInt = index;
    if ((index - (double) indexInt) > 0.5)
    {
        indexInt += 1;
    }
    return indexInt;
}