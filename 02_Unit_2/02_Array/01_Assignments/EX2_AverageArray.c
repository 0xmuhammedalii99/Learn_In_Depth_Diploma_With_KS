/**
 * File : EX2_AverageArray.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 24 January , 2024
 * Description: Write C Program to Find Average of Array
 */

#include <stdio.h>
int main(void)
{
    float Array[20] = {0.0};
    float Summing = 0.0;
    int index = 0;
    int Size = 0;
    printf("Enter Size of Array:\t ");
    fflush(stdout);
    scanf("%d", &Size);
    for (index = 0; index < Size; index++)
    {
        printf("Enter Element[%d]:\t", index + 1);
        fflush(stdout);
        scanf("%f", &Array[index]);
        Summing += Array[index];
    }
    printf("%.3f", Summing / Size);
    return 0;
}