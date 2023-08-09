#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str : string
 * Return: 0
 */

char *_strdup(char *str)
{
	int length;

	if (str == NULL)
	{
		return (0);
	}

	length = strlen(str);
	char *n = (char *) malloc((length + 1) * sizeof(char));

	if (n == NULL)
	{
		return (0);
	}

	strcpy(n, str);

	return (n);
}
