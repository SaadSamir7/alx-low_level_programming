#include "main.h"

/**
 *sqrtroot -> Makes possible to evaluate from 1 to n
 *@a: same number as n
 *@b: number that iterates from 1 to n
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int sqrtroot(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrtroot(a, b + 1));
}

/**
 *_sqrt_recursion -> returns the natural square root of n
 *@n: Number Integer
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrtroot(n, 1));
}
