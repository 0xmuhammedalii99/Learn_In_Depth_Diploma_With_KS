/**
 * File : EX2_PrintIntegerByUser.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Program to Print a Integer Entered by a User
 */

#include <stdio.h>
int main(void)
{
    int Num = 0;
    printf("Enter Number : \t");
    fflush(stdout); // To Empty Scanf to Avoid any Errors
    scanf("%d", &Num);
    printf("You Entered : %d\n", Num);
    return 0;
}