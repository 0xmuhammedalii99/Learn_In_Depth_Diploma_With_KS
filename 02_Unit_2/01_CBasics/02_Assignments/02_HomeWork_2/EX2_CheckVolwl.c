/**
 * File : EX2_CheckVolwl.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Programm to Check Vowel or Constant
 */
#include <stdio.h>
int main(void)
{
    char Character;
    printf("Enter Character ( Check Vowel or not ) :\t");
    fflush(stdout);
    scanf("%c", &Character);
    if (Character == 'a' || Character == 'e' || Character == 'i' || Character == 'u' || Character == 'o')
    {
        printf("%c is Vowel\n",Character);
    }
    else
    {
        printf("%c is Consonant\n",Character);
    }
    return 0;
}