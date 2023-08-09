#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i, w, j, k, count, m, wordf;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	count = 0;
	if (*str == '\0' || str == 0)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == 0)
		return (0);
	for (wordf = 0; str[wordf] && j <= w; wordf++)
	{
		count = 0;
		if (str[wordf] != ' ')
		{
			for (i = wordf ; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
				count++;
			}
			*(p + j) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + j) == 0)
			{
				for (k = 0; k <= j; k++)
				{
					x = p[k];
					free(x);
				}
				free(p);
				return (0);
			}
			for (m = 0; wordf < i; wordf++)
			{
				p[j][m] = str[wordf];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = 0;
	return (p);
}
