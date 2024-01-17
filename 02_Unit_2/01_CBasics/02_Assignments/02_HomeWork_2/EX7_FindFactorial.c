/**
 * File : EX7_FindFactorial.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 17 January , 2024
 * Description: Write C Programm to Find Factorial of Number
 */
#include <stdio.h>
int main(void)
{
    int Num = 0;
    int Factorial = 1;
    int Counter = 0;
    printf("Enter Number ( Find its Factorial ):\t");
    fflush(stdout);
    scanf("%d", &Num);
    if (Num < 0)
    {
        printf("Error !!! Factorial of Negative Number doesn't Exist\n");
    }
    else if (Num >= 0)
    {
        for (Counter = 1; Counter <= Num; Counter++)
        {
            Factorial *= Counter;
        }
        printf("%d its Factorial = %d", Num, Factorial);
    }

    return 0;
}
