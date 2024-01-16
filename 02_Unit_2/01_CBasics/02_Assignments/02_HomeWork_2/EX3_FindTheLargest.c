/**
 * File : EX3_FindTheLargest.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Programm to Find Largest Number amoung Three Numbers
 */

#include <stdio.h>
int main(void)
{
    float Num1 = 0.0;
    float Num2 = 0.0;
    float Num3 = 0.0;
    printf("Enter Three Number ( Check the Largest )\n");
    fflush(stdout);
    scanf("%f%f%f", &Num1, &Num2, &Num3);
    //? I Think on this Solution By My Self 😎
    printf("Largest Number : %f\n", (Num1 > Num2) ? ((Num1 > Num3) ? Num1 : Num3) : ((Num2 > Num3) ? Num2 : Num3));
    return 0;
}