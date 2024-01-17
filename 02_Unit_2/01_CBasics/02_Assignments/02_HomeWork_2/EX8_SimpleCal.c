/**
 * File : EX8_SimpleCal.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 17 January , 2024
 * Description: Write C Program to Make a Simple Calculator
 */
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    float Num1 = 0;
    float Num2 = 0;
    float Result = 0;
    char Operation = 0;
    printf("*******************************************************************\n");
    printf("********************** Simple Calulator ***************************\n");
    printf("*******************************************************************\n");
    sleep(3);
    printf("\nEnter Operation ( Num+Num )\n\n");
    fflush(stdout);
    scanf("%f%c%f", &Num1, &Operation, &Num2);
    switch (Operation)
    {
    case '+':
        Result = Num1 + Num2;
        printf("Ans = %0.3f", Result);
        break;
    case '-':
        Result = Num1 - Num2;
        printf("Ans = %0.3f", Result);
        break;
    case '*':
        Result = Num1 * Num2;
        printf("Ans = %0.3f", Result);
        break;
    case '/':
        if (Num2 == 0)
        {
            printf("\n !!!! Invalid Operation\n");
        }
        else
        {
            Result = Num1 / Num2;
            printf("Ans = %0.3f", Result);
        }
        break;
    default:
        printf("Enter Valid Operation !! \n");
        break;
    }

    return 0;
}