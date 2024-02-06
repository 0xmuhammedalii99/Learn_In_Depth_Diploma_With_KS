/**
 * File : EX3_AddTwoComplex.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 3 February , 2024
 * Description: Write C Program to Sum to Complex Numbers
 */
#include <stdio.h>
typedef struct
{
    float Real;
    float Imag;
} S_Complex;
void Input_Complex_Number(S_Complex *PtrNum);
void Sum_TwoComplex(S_Complex *PtrNum1, S_Complex *PtrNum2, S_Complex *PtrSum);
int main(void)
{
    S_Complex Number1, Number2, Sum;
    printf("Enter Number 1 :\n");
    Input_Complex_Number(&Number1);
    printf("Enter Number 2 :\n");
    Input_Complex_Number(&Number2);
    Sum_TwoComplex(&Number1, &Number2, &Sum);
    return 0;
}
void Input_Complex_Number(S_Complex *PtrNum)
{
    printf("Enter Real : \t");
    scanf("%f", &PtrNum->Real);
    fflush(stdout);
    fflush(stdin);
    printf("Enter Imag : \t");
    scanf("%f", &PtrNum->Imag);
    fflush(stdout);
    fflush(stdin);
}
void Sum_TwoComplex(S_Complex *PtrNum1, S_Complex *PtrNum2, S_Complex *PtrSum)
{
    PtrSum->Real = PtrNum1->Real + PtrNum2->Real;
    PtrSum->Imag = PtrNum1->Imag + PtrNum2->Imag;
    printf("Sum : %.1f + %.1f i", PtrSum->Real, PtrSum->Imag);
}