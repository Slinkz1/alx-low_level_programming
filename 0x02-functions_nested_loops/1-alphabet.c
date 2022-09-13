#include "main.h"
/**
 * main - Entry point
 * Description:print_alphabets in lower case
 * followed by a new line.
 * Return:0
 */
print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
