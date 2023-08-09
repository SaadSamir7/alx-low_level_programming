#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == 0)
		return (0);

	int len = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	char *c = (char *) malloc(len + 1);

	if (!c)
		return (0);

	int k = 0;

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
