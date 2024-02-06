/**
 * File : EX1_StoreInformation.c
 * Author : Muhammed Ali Ibrahim Ahmed 
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 3 February , 2024
 * Description: Write C Program to Store Student Information and Display it  
*/
#include <stdio.h>
typedef struct
{
    char Name[10];
    int RollNumber;
    float Marks;
} S_StudentInformation;
void Enter_Student_Data(S_StudentInformation *Pointer);
void Print_Student_Data(S_StudentInformation *Pointer);
int main(void)
{
    S_StudentInformation Student1;
    Enter_Student_Data(&Student1);
    Print_Student_Data(&Student1);
    return 0;
}
void Enter_Student_Data(S_StudentInformation *Pointer)
{
    printf("Enter Student Name :\n");
    scanf("%s", Pointer->Name);
    fflush(stdout);
    fflush(stdin);
    printf("Enter Student Roll Number :\n");
    scanf("%d", &Pointer->RollNumber);
    fflush(stdout);
    fflush(stdin);
    printf("Enter Student Marks :\n");
    scanf("%f", &Pointer->Marks);
    fflush(stdout);
    fflush(stdin);
}
void Print_Student_Data(S_StudentInformation *Pointer)
{
    printf("Name : %s\n", Pointer->Name);
    printf("Roll Number  : %d\n", Pointer->RollNumber);
    printf("Name : %f\n", Pointer->Marks);
}