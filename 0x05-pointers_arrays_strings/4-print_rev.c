#include "main.h"

/**
 * main - check the code
 *
 * @s : is a string
 *
 * Return: Always 0.
 */
void print_rev(char *s);
{
	int i;
	char c;

	for (i = 0; s[i] != 0; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
