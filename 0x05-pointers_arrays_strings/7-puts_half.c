#include "main.h"

/**
 *puts_half ->  prints half of a string
 *@str: is a string
 *Return: string
 **/
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int n = (length - 1) / 2;

	for (i = 0; str[i] < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
