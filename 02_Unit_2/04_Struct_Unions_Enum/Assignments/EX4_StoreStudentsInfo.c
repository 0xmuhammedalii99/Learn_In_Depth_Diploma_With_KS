/**
 * File : EX4_StoreStudentsInfo.c
 * Author : Muhammed Ali Ibrahim Ahmed
 * LinkedIn: https://www.linkedin.com/in/muhammedalii9/
 * Date : 3 February , 2024
 * Description: Write C Program to Take Information of 10 Students and Display them
 */
typedef struct
{
    char Name[10];
    int RollNumber;
    float Mark;
} S_StudentInfo;
void Input_Information(S_StudentInfo *PtrInfoArr, int ArrSize);
void Display_Information(S_StudentInfo *PtrInfoArr, int ArrSize);
#include <stdio.h>
int main(void)
{
    S_StudentInfo StudentArray[10];
    Input_Information(StudentArray, 10);
    Display_Information(StudentArray, 10);
    return 0;
}
void Input_Information(S_StudentInfo *PtrInfoArr, int ArrSize)
{
    int L_Counter = 0;
    for (L_Counter = 0; L_Counter < ArrSize; L_Counter++)
    {
        printf("--------------------------------------------------\n");
        printf("Enter Information of Student %d\n", L_Counter + 1);
        printf("--------------------------------------------------\n");
        printf("Enter Student Name \n");
        scanf("%s", PtrInfoArr[L_Counter].Name);
        fflush(stdout);
        fflush(stdin);
        printf("Enter Student Roll Number \n");
        scanf("%d", &PtrInfoArr[L_Counter].RollNumber);
        fflush(stdout);
        fflush(stdin);
        printf("Enter Student Marks \n");
        scanf("%f", &PtrInfoArr[L_Counter].Mark);
        fflush(stdout);
        fflush(stdin);
    }
}
void Display_Information(S_StudentInfo *PtrInfoArr, int ArrSize)
{
    int L_Counter = 0;
    for (L_Counter = 0; L_Counter < ArrSize; L_Counter++)
    {
        printf("--------------------------------------------------\n");
        printf("Student %d Information\n", L_Counter + 1);
        printf("--------------------------------------------------\n");
        printf("Student Name : %s\n", PtrInfoArr[L_Counter].Name);
        printf("Student Roll Number : %d\n", PtrInfoArr[L_Counter].RollNumber);
        printf("Student Marks : %f\n", PtrInfoArr[L_Counter].Mark);
    }
}
