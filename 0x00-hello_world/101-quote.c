#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, arr, 59);
	return (1);
}
