#include "main.h"
#include "stdio.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int digit, temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;
	digit = 1;
	while (temp > 9)
	{
		temp /= 10;
		digit *= 10;
	}

	while (digit >= 1)
	{
		_putchar((n / digit) + '0');
		n %= digit;
		digit /= 10;
	}
}
