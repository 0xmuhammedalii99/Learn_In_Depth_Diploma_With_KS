/**
 * File : EX1_CheckEvenOdd.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Programm to Check Whether Number is Even or Odd
 */
#include <stdio.h>
int main(void)
{
    int Num = 0;
    printf("Enter Number ( Check Even or Odd ) :\t");
    fflush(stdout);
    scanf("%d", &Num);
    if (Num % 2 == 0)
    {
        printf("%d is Even\n", Num);
    }
    else
    {
        printf("%d is Odd\n", Num);
    }
    return 0;
}