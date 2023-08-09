#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: a pointer to a new string
 **/

char *argstostr(int ac, char **av)
{
	int len, k;
	char *c;

	if (ac == 0 || av == 0)
		return (0);

	len = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	*c = (char *) malloc(len + 1);

	if (!c)
		return (0);

	k = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			c[k] = av[i][j];
			k++;
		}

		c[k] = '\n';
		k++;
	}

	c[k] = '\0';

	return (c);
}
