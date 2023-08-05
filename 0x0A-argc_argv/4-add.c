#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main -  adds positive numbers.
 *@argc: The number of command-line arguments passed to the program
 *@argv: An array of pointers to strings containing the command-line arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (int j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
