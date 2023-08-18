#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints a string
 *@separator: separator between strings
 *@n: numbers of args
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;

	char *ptr;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(st, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(st);
}
