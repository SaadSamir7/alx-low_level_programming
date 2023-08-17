#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 * @argc: number of arguments
 * @argv: argument variables
 * Return: 0 for sucess
 */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(argv[2]);
	if (res == 0)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = res(a, b);
	printf("%d\n", result);
	return (0);
}
