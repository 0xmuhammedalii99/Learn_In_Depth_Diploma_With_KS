/**
 * [File] : EX1_HandlePointer.c
 * 
 * [Author] : Muhammed Ali Ibrahim Ahmed
 * 
 * [LinkedIn]: https://www.linkedin.com/in/muhammedalii9/
 * 
 * [Date] : 11 February , 2024
 * 
 * [Description]: Write C Program to Handle Pointers 
 * 
 */
#include <stdio.h>
int main(void)
{
    int m = 29;
    int *ab;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    ab = &m;
    printf("Now ab is Assign to the Address of m\n");
    printf("Address of Pointer ab :%p\n", &ab);
    printf("Content of Pointer ab :%d\n", *ab);
    m = 34;
    printf("Now m is Assign to 34\n");
    printf("Address of Pointer ab :%p\n", &ab);
    printf("Content of Pointer ab :%d\n", *ab);
    *ab = 7;
    printf("Now Pointer Value is Assign to 7\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    return 0;
}