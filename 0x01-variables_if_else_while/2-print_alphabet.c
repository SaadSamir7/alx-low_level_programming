#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
