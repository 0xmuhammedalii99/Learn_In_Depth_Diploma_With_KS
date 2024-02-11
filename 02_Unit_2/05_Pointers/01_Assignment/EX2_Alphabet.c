/**
 * [File] : EX2_Alphabet.c
 *
 * [Author] : Muhammed Ali Ibrahim Ahmed
 *
 * [LinkedIn]: https://www.linkedin.com/in/muhammedalii9/
 *
 * [Date] : 11 February , 2024
 *
 * [Description]: Write C Program to Print Alphabets Unsing Pointers
 *
 */
#include <stdio.h>
/* Macro For Alphabets Size */
#define AlphabetsSize 27
int main(void)
{
	char Alphabets[AlphabetsSize];
	char *P_Alphabet = Alphabets;
	char counter = 0;

	for (counter = 0; counter < AlphabetsSize - 1; counter++)
	{
		*(P_Alphabet + counter) = counter + 'A';
	}
	printf("Alplabets are \n");
	for (counter = 0; counter < AlphabetsSize - 1; counter++)
	{
		printf("%c\t", *(P_Alphabet + counter));
	}
	return 0;
}