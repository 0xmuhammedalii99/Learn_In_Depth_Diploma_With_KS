/**
 * [File] : EX4_PrintElement.c
 *
 * [Author] : Muhammed Ali Ibrahim Ahmed
 *
 * [LinkedIn]: https://www.linkedin.com/in/muhammedalii9/
 *
 * [Date] : 11 February , 2024
 *
 * [Description]: Write C Program to Print Element of Array
 *
 */
#include <stdio.h>
int main(void)
{
    int Number, i = 0, arr[15];
    int *P_arr = arr;

    printf("Enter the number of element : ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &Number);

    printf("input %d number of element\n", Number);

    for (i = 0; i < Number; i++)
    {
        printf("element - %d : ", i + 1);
        fflush(stdout);
        fflush(stdin);
        scanf("%d", P_arr++);
    }

    P_arr = &arr[Number - 1];

    printf("\n");
    for (i = Number; i > 0; i--)
    {
        printf("element - %d : %d \n", i, *P_arr--);
    }

    return 0;
}