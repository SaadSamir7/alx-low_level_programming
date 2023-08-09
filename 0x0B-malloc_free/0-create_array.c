#include "main.h"

/**
 **create_array - creates an array of chars, with a specific char
 *@size : size of array
 *@c : char
 *Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
