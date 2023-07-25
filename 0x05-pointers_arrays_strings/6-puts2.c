#include "main.h"

/**
 *_puts2 ->  prints every other character of a string
 *@str: char
 *Return: string
 **/
void puts2(char *str)
i{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
