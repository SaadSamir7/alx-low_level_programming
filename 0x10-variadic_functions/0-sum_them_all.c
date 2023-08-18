#include "variadic_functions.h"

/**
 *sum_them_all - sum of all its parameters
 *@n: num of arg
 *@...: int num to sum
 * 
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list st;

	if (!n)
		return (0);
	va_start(st, n);
	for (i = 0, i <= n, i++)
		sum += va_arg(st, int);
	va_end(st);
	return (sum);
}
