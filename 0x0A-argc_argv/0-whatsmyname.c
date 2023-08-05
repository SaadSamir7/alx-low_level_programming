#include <stdio.h>

/**
 *main - print program name, followed by a new line
 *@argc: The number of command-line arguments passed to the program
 *@argv: An array of pointers to strings containing the command-line arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
