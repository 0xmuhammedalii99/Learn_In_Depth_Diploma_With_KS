/**
 * File : EX2_Factorial.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 5 February , 2024
 * Description: Write C Program to Find Factorial of Number Using Recursiion
 */
#include <stdio.h>
int Factorial(int Number);
int main(void)
{
    int Num = 0;
    int Fac = 0;
    printf("Enter Number :\t");
    scanf("%d", &Num);
    fflush(stdout);
    Fac = Factorial(Num);
    printf("Factorial = %d", Fac);
    return 0;
}

int Factorial(int Number)
{
    if (Number == 0)
        return 1;
    else
        return Number * Factorial(Number - 1);
}
