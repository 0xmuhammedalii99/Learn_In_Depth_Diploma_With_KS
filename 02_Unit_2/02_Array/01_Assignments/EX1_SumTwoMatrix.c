/**
 * File : EX1_SumTwoMatrix.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 24 January , 2024
 * Description: Write C Program to Sum Two Matrix 2*2
 */
#include <stdio.h>
int main(void)
{
    float First_Array[2][2];
    float Second_Array[2][2];
    float Summing_Array[2][2];
    int row = 0;
    int column = 0;
    printf("Enter Elements for First Array\n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("For First Array: Enter Element [%d][%d]:\t", (row + 1), (column + 1));
            fflush(stdout);
            scanf("%f", &First_Array[row][column]);
        }
    }
    printf("\nEnter Elements for Second Array\n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("For Second Array: Enter Element [%d][%d]:\t", (row + 1), (column + 1));
            fflush(stdout);
            scanf("%f", &Second_Array[row][column]);
        }
    }

    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            Summing_Array[row][column] = First_Array[row][column] + Second_Array[row][column];
        }
    }
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("%.2f\t", Summing_Array[row][column]);
        }
        printf("\n");
    }

    return 0;
}