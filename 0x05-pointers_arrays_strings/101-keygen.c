#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - makes something that cracks 101crackme
 * Description: cracking the hacker code
 * Return:0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);

	}
	putchar(2772 - sum);
	return (0);
}
