#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the array or null
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
