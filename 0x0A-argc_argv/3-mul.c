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
	int mul = 0;
	char s[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", s);
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	return (0);
}
