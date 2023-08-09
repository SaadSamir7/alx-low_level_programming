#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Entry point
 *@str: string
 *Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *cpy = 0;
	int i;
	int n;

	if (str == 0)
		return (0);
	for (n = 0; str[n] != '\0'; n++)
	;
	cpy = (char *) malloc((n + 1) * sizeof(char));
	if (cpy != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			cpy[i] = str[i];
	}
	else
	{
		return (NULL);
	}

	cpy[i] = '\0';
	return (cpy);
}
