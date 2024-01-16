/**
 * File : EX6_SwapNumber.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write Source Code to Swap Two Numbers
 */
#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 0;
    int temp = 0;
    printf("Enter a :\t");
    fflush(stdout);
    scanf("%d", &a);
    printf("Enter b :\t");
    fflush(stdout);
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping a = %d\nAfter Swapping b = %d\n", a, b);
    return 0;
}