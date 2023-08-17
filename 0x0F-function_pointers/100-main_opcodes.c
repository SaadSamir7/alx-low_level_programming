#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcode
 * @argc: number of arguments
 * @argv: argument variables 
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *s;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (num2 = 0; num2 < num1 - 1; num2++)
		printf("%02hhx ", s[num2]);
	printf("%02hhx\n", s[num2]);
	return (0);
}
