/**
 * File : EX6_SumOfNaturalNum.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 17 January , 2024
 * Description: Write C Programm to Calculate Sum of Natural Number
 */
#include <stdio.h>
int main(void)
{
    int Num = 0;
    int Counter = 0;
    int Sum = 0;
    printf("Enter Number ( Calc its Sum ):\t");
    fflush(stdout);
    scanf("%d", &Num);
    for (Counter = 0; Counter <= Num; Counter++)
    {
        Sum += Counter;
    }
    printf("Sum = %d", Sum);
    return 0;
}