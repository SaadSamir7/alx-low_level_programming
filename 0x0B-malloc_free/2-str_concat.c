#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 *Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *strn = NULL;
	int i = 0;
	int size1 = 0;
	int size2 = 0;
	int c = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	strn = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (strn == 0)
	{
		return (0);
	}

	while (s1[i] != '\0')
	{
		strn[i] = s1[i];
		i++;
	}

	c = 0;
	while (s2[c] != '\0')
	{
		strn[i] = s2[c];
		c++;
		i++;
	}

	return (strn);
}
