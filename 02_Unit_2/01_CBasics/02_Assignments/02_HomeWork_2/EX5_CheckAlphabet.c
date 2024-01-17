/**
 * File : EX5_CheckAlphabet.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 17 January , 2024
 * Description: Write C Programm to Check Whether Character is Alphabet or not
 */
#include <stdio.h>
int main(void)
{
    char Character;
    printf("Enter Character ( Check Alphabet or Not) :\t");
    fflush(stdout);
    scanf("%c", &Character);
    if (Character >= 'a' && Character <= 'z')
    {
        printf("%c is Not an Alphabet\n", Character);
    }
    else if (Character >= 'A' && Character <= 'Z')
    {
        printf("%c is an Alphabet\n", Character);
    }
    else
    {
        /* Nothing */
    }
    return 0;
}