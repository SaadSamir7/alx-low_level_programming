#include "main.h"
/**
 * print_last_digit -> print the last digit of a number
 * @n: int  number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = n % 10;
		_putchar(num + '0');
		return (num);
	}
}
