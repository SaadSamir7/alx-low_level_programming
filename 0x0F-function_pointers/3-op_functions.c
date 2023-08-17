#include "3-calc.h"

/**
 * op_add - add function
 * @a: int
 * @b: int
 * Return: sum int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub function
 * @a: int
 * @b: int
 * Return: sub result int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul function
 * @a: int
 * @b: int
 * Return: mul result int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div function
 * @a: int
 * @b: int
 * Return: div result int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod function
 * @a: int
 * @b: int
 * Return: mod result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
