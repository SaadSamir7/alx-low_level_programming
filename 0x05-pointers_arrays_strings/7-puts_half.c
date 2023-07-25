#include "main.h"

/**
 *puts_half - Prints half of a string, followed by a new line.
 *
 *@str: Input string
 */
void puts_half(char *str)
{
	int i = 0, n;

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
