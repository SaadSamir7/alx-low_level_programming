#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatentates two strings using the newly allocated memory
 *@s1: first string
 *@s2: second string
 *@n: unsigned int
 *Return: a pointer to 2 string concat..
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, j;
	char *ptr;

	len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len])
		len++;
	ptr = malloc(len + n + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (s1[i])
	{
		ptr[i] = s1[i];
		i += 1;
	}

	j = 0;
	while (j < n)
	{
		ptr[i + j] = s2[j];
		j += 1;
	}

	ptr[i + j] = '\0';
	return (ptr);
}
