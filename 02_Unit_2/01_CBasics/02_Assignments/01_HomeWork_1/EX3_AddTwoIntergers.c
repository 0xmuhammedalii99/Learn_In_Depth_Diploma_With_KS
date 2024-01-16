/**
 * File : EX3_AddTwoIntergers.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Program to Add Two Integers
 */

#include <stdio.h>
int main(void)
{
    int Num1 = 0;
    int Num2 = 0;
    printf("Enter Two Numbers : \n");
    fflush(stdout);
    scanf("%d%d", &Num1, &Num2);
    printf("Sum = %d\n", Num1 + Num2);
    return 0;
}