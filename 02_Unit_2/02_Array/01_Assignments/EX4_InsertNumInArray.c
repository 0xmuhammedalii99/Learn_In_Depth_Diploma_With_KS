/**
 * File : EX4_InsertNumInArray.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 24 January , 2024
 * Description: Write C Program to Inser Number in Array
 */
#include <stdio.h>
int main(void)
{
    int Array[15] = {0};
    int Array_Size = 0;
    int Location = 0;
    int Number = 0;
    int index = 0;
    // Enter Array size
    printf("Enter Size of Array :\t");
    fflush(stdout);
    scanf("%d", &Array_Size);
    // Enter Array elements
    for (index = 0; index < Array_Size; index++)
    {
        printf("Enter Element[%d] :\t", index + 1);
        fflush(stdout);
        scanf("%d", &Array[index]);
    }
    // Print Entered Array
    printf("\n=================================================================\n");
    printf("Enterd Array");
    printf("\n=================================================================\n");
    for (index = 0; index < Array_Size; index++)
    {
        printf("%d\t", Array[index]);
    }
    // Entered Inserted Number
    printf("\nEnter Inserted Number : \t");
    fflush(stdout);
    scanf("%d", &Number);
    // Enter Location of Inserted Number
    printf("\nEnter Location of Inserted Number : \t");
    fflush(stdout);
    scanf("%d", &Location);
    // Insert Number in Array
    for (index = Array_Size; index >= Location - 1; index--)
    {
        if (index > Location - 1)
            Array[index] = Array[index - 1];
        else if (index == Location - 1)
            Array[index] = Number;
    }
    // Print Array Array
    printf("\n=================================================================\n");
    printf("Enterd Array");
    printf("\n=================================================================\n");
    for (index = 0; index <= Array_Size; index++)
    {
        printf("%d\t", Array[index]);
    }

    return 0;
}