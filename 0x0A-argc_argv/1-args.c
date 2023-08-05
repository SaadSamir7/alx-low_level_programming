#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: The number of command-line arguments passed to the program
 *@argv: An array of pointers to strings containing the command-line arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
