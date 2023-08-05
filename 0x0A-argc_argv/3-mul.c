#include <stdio.h>
#include <stdlib.h>

/**
 *main -  multiplies two numbers.
 *@argc: The number of command-line arguments passed to the program
 *@argv: An array of pointers to strings containing the command-line arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (a * b));
}
