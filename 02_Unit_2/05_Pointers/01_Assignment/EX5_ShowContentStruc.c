/**
 * [File] : EX5_ShowContentStruc.c
 *
 * [Author] : Muhammed Ali Ibrahim Ahmed
 *
 * [LinkedIn]: https://www.linkedin.com/in/muhammedalii9/
 *
 * [Date] : 11 February , 2024
 *
 * [Description]: Write C Program to Show Content of Structure
 *
 */
#include <stdio.h>
typedef struct SEmployee
{
    char *name;
    int id;
} SEmployee;
int main(void)
{
    SEmployee emp1 = {"Mina", 15}, emp2 = {"Karam", 24}, emp3 = {"Fahmy", 49};

    SEmployee *arr[] = {&emp1, &emp2, &emp3};

    SEmployee *(*P_arr_emp)[3] = &arr;

    printf(" Employee Name : %s \n", (*(*P_arr_emp))->name);
    printf(" Employee ID :  %d \n", (*(*P_arr_emp))->id);

    return 0;
}