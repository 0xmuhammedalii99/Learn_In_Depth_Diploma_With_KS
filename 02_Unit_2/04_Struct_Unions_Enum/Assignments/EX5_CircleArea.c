/**
 * File : EX5_CircleArea.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 3 February , 2024
 * Description: Write C Program to Calculate Area of Circle Using Macros
 */

#include <stdio.h>
#define PI (3.14)
#define Cirlce_Area(R) ((PI) * (R) * (R))
int main(void)
{
    int Radius = 0;
    float Area = 0.0;
    printf("Enter Radius:\t");
    scanf("%d", &Radius);
    Area = Cirlce_Area(Radius);
    printf("Area of Circle = %f", Area);
    return 0;
}