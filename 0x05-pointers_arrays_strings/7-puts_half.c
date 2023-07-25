#include "main.h"

/**
 *puts_half ->  prints half of a string
 *@str: is a string
 *Return: string
 **/
void puts_half(char *str)
{
	int length = 0;
	int n;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	n = (length - 1) / 2 + 1;

	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
