/**
 * File : EX3_ReverseSentace.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 5 February , 2024
 * Description: Write C Program to Reverse Sentence
 */
#include <stdio.h>
void Reverse_Sentence(void);
int main(void)
{
    printf("Enter Sentence : \t");
    Reverse_Sentence();
    return 0;
}
void Reverse_Sentence(void)
{
    char Character;
    scanf("%c", &Character);
    if (Character != '\n')
    {
        Reverse_Sentence();
        printf("%c", Character);
    }
}