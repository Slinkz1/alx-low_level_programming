#include<stdio.h>
/**
 * main-Entry point
 * Descriptioin: Using the main function
 * a program that prints all possible combinations of single-digit numbers.
 * "0,1,2,3,4,5,6,7,8,9"
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
	{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
