#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	putchar('0');
	putchar('1');

	for (i = 2; i < 10; i++)
	{
		putchar(',');
		putchar(' ');

		putchar('0');
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
