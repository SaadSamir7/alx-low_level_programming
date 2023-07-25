#include "main.h"

/**
 *_puts2 ->  prints every other character of a string
 *
 *@str: char
 *
 *Return: string
 **/
void puts2(char *str)
{
	int length = 0;

	while (*str[length] != '\0')
	{
		length++;
	}

	for (i = 0; *(str + i) < length; i += 2)
		_putchar(*(str[i]));
	_putchar('\n');
}
