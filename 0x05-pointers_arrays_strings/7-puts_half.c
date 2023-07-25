#include "main.h"

/**
 *puts_half -> function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 * 
 *return : string
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
		i++;

	n = i / 2;

	if (i % 2 == 1)
		n++;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
