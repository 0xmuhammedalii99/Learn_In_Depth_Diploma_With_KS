/**
 * File : EX7_SwapNumber_Trick.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write Source Code to Swap Two Numbers without Using Temp
 */
#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 0;
    printf("Enter a :\t");
    fflush(stdout);
    scanf("%d", &a);
    printf("Enter b :\t");
    fflush(stdout);
    scanf("%d", &b);

    //! I Can't Solve it By Myself so search for solution
    //* Assuming User Enter a = 30 , b = 12
    a = a + b; // a = 30+12 = 42
    b = a - b; // b = 42 - 12 = 30   b become 30 ( Past value of a )
    a = a - b; // a = 42-30 = 12     a become 12 ( Past Value of b )
    printf("a become :%d\n b become: %d\n", a, b);
    return 0;
}