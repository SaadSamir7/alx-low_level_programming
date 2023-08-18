#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers
 *@separator: separator between numbers
 *@n: numbers of args
 *Return: nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(st, int));
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(st);
}
