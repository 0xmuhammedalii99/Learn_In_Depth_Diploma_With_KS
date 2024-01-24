/**
 * File : EX3_TransposeMatrix.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 24 January , 2024
 * Description: Write C Program to Find Transpose of Matrix
 */

#include <stdio.h>
int main(void)
{
    int Matrix[10][10];
    int Transposed_Matrix[10][10];
    int row = 0;
    int column = 0;
    int row_size = 0;
    int column_size = 0;
    printf("For Matrix : Enter Row Size :\t");
    fflush(stdout);
    scanf("%d", &row_size);
    printf("For Matrix : Enter Column Size :\t");
    fflush(stdout);
    scanf("%d", &column_size);
    printf("\n=================================================================\n");
    // User Input
    for (row = 0; row < row_size; row++)
    {
        for (column = 0; column < column_size; column++)
        {
            printf("Enter Element[%d][%d]:\t", row + 1, column + 1);
            fflush(stdout);
            scanf("%d", &Matrix[row][column]);
        }
    }
    // Transpose Oparation
    for (row = 0; row < row_size; row++)
    {
        for (column = 0; column < column_size; column++)
        {
            Transposed_Matrix[column][row] = Matrix[row][column];
        }
    }
    // Print Matrix
    printf("\n=================================================================\n");
    printf("Enterd Matrix ");
    printf("\n=================================================================\n");
    for (row = 0; row < row_size; row++)
    {
        for (column = 0; column < column_size; column++)
        {
            printf("%d\t", Matrix[row][column]);
        }
        printf("\n");
    }
    // Print Transpose
    printf("\n=================================================================\n");
    printf("Transposed Matrix ");
    printf("\n=================================================================\n");
    for (column = 0; column < column_size; column++)
    {
        for (row = 0; row < row_size; row++)
        {
            printf("%d\t", Transposed_Matrix[column][row]);
        }
        printf("\n");
    }
    return 0;
}