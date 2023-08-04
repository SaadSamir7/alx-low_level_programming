#include "main.h"

/**
 * _strlen_recursion -> reuturn the size of string
 * @s : point of string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
