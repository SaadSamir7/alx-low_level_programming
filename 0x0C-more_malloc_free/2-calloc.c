#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - Allocate memory for an array and initialize with zeros
 *@nmemb: Number of elements
 *@size: Size of each element
 *
 *Return: Pointer to the allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		*(s + i) = 0;
		i++;
	}

	return (s);
}
