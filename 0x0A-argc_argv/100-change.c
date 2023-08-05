#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[])
{
	int c, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	i = 0;
	while (c > 0)
	{
		if (c >= 25)
		{
			c -= 25;
			i += 1;
		}
		else if (c >= 10)
		{
			c -= 10;
			i += 1;
		}
		else if (c >= 5)
		{
			c -= 5;
			i += 1;
		}
		else if (c >= 2)
		{
			c -= 2;
			i += 1;
		}
		else
		{
			c -= 1;
			i += 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
