/**
 * File : EX5_FindASCI.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 16 January , 2024
 * Description: Write C Program to Find ASCII Value of a Character
 */

#include <stdio.h>
int main(void)
{
    char Character;
    printf("Enter Character to Know its Asci : \t");
    fflush(stdout);
    scanf("%c", &Character);
    printf("ASCI Value : %d", Character);
    return 0;
}