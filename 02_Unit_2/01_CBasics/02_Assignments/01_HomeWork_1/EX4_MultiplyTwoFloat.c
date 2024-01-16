/**
 * File : EX4_MultiplyTwoFloat.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Program to Multiply two Floating Point Numbers
 */
#include <stdio.h>
int main(void)
{
    float Num1 = 0.0;
    float Num2 = 0.0;
    printf("Enter Two Float Number : \n");
    fflush(stdout);
    scanf("%f%f", &Num1, &Num2);
    printf("Product = %f", (Num1 * Num2));
    return 0;
}