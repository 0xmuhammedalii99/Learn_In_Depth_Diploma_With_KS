/**
 * [File] : EX3_ReverseStatement.c
 *
 * [Author] : Muhammed Ali Ibrahim Ahmed
 *
 * [LinkedIn]: https://www.linkedin.com/in/muhammedalii9/
 *
 * [Date] : 11 February , 2024
 *
 * [Description]: Write C Program to Print Reverse Statement By User
 *
 */

#include <stdio.h>
int main(void)
{
    char Arr_String[15];
    char Arr_RevString[15];
    char *PString = Arr_String;
    char *PRevString = Arr_RevString;
    int Counter = -1;
    printf("Enter String :\t");
    scanf("%c", Arr_String);
    while (*PString)
    {
        *PString;
        Counter++;
    }
    while (Counter >= 0)
    {
        PString--;
        *PRevString = *PString;
        PRevString++;
        --Counter;
    }
    printf("Reverse of the string is : %s\n\n", Arr_RevString);

    return 0;
}