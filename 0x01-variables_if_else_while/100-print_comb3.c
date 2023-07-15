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
	int fd;
	int sd;

	for (fd = 0; fd < 9; fd++)
	{
		for (sd = first_digit + 1; sd <= 9; sd++)
		{
			putchar(fd + '0');
			putchar(sd + '0');

			if (fd != 8 || sd != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
