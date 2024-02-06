/**
 * File : EX2_AddTwoDistance.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 3 February , 2024
 * Description: Write C Program to Add Two Distance and Sum them
 */
#include <stdio.h>
typedef struct
{
    int Feet;
    float Inch;
} S_Distance;
void Sum_Distance(S_Distance *PtrDistance1, S_Distance *PtrDistance2, S_Distance *PtrSum);
void input_Distance(S_Distance *PtrDistance);
int main(void)
{
    S_Distance Distance_1, Distance_2, Sum;
    printf("Enter Information for Distance 1\n");
    input_Distance(&Distance_1);
    printf("Enter Information for Distance 2\n");
    input_Distance(&Distance_2);
    Sum_Distance(&Distance_1, &Distance_2, &Sum);
    return 0;
}
void input_Distance(S_Distance *PtrDistance)
{
    printf("Enter Feets : \t");
    scanf("%d", &PtrDistance->Feet);
    fflush(stdout);
    fflush(stdin);
    printf("Enter Inches : \t");
    scanf("%f", &PtrDistance->Inch);
    fflush(stdout);
    fflush(stdin);
}
void Sum_Distance(S_Distance *PtrDistance1, S_Distance *PtrDistance2, S_Distance *PtrSum)
{
    PtrSum->Feet = PtrDistance1->Feet + PtrDistance2->Feet;
    PtrSum->Inch = PtrDistance1->Inch + PtrDistance2->Inch;
    if (PtrSum->Inch > 12.0)
    {
        PtrSum->Inch -= 12.0;
        PtrSum->Feet++;
    }
    printf("Sum Distance : %d\' - %0.1f\"", PtrSum->Feet, PtrSum->Inch);
}