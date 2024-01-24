/**
 * File : EX5_SearchNumInArray.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 24 January , 2024
 * Description: Write C Program to Search Number in Array
 */
#include <stdio.h>
int main(void)
{
    int Array[15] = {0};
    int Array_Size = 0;
    int Search_Number = 0;
    int Position = 0;
    int Flag = 0;
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
    printf("Enter Searched Number :\t");
    fflush(stdout);
    scanf("%d", &Search_Number);
    // Searching For Number
    for (index = 0; index < Array_Size; index++)
    {
        if (Array[index] == Search_Number)
        {
            Position = index;
            Flag = 1;
            break;
        }
    }
    // Checking Number is Found or Not
    if (Flag)
    {
        printf("Number %d in Position %d\n", Search_Number, Position + 1);
    }
    else
    {
        printf("Couldn't Find Number\n");
    }
    return 0;
}
