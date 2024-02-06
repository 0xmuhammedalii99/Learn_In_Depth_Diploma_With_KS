/**
 * File : EX1_PrimeNumbers.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 5 February , 2024
 * Description: Write C Program to Find Prime Numbers Between Two Intervals
 */

#include <stdio.h>
void FindPrimeBetween(int Number1, int Number2);
typedef enum
{
    FALSE,
    TRUE,
} BOOLEN;
int main(void)
{
    int Num1 = 0;
    int Num2 = 0;
    printf("Enter First Number : \t");
    scanf("%d", &Num1);
    fflush(stdout);
    printf("Enter Second Number : \t");
    scanf("%d", &Num2);
    fflush(stdout);
    FindPrimeBetween(Num1, Num2);
    return 0;
}
void FindPrimeBetween(int Number1, int Number2)
{
    BOOLEN Flag = TRUE;
    printf("Prime Numbers Between %d : %d --> ", Number1, Number2);
    for (int Start = Number1, End = Number2; Start <= End; Start++)
    {
        for (int Counter = 2; Counter < (End / 2); Counter++)
        {
            if (Start % Counter == 0)
            {
                Flag = FALSE;
                break;
            }
        }
        if (Flag == TRUE)
        {
            printf("\t%d", Start);
        }
    }
}
