/**
 * File : EX4_CheckPositiveNegative.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Programm to Check Whether Number is Positive or Negative
 */
#include <stdio.h>
int main(void)
{
    signed int Num = 0; // We know that int only meaning that it is signed
    printf("Enter Number ( Check Positive or Negative ):\t");
    fflush(stdout);
    scanf("%d", &Num);
    if (Num > 0)
    {
        printf("%d is Positive Number\n", Num);
    }
    else if (Num < 0)
    {
        printf("%d is Negative Number\n",Num);
    }
    else if (Num == 0)
    {
        printf("You Entered Zero\n");
    }
    else
    {
        /* Nothing*/
    }
    return 0;
}