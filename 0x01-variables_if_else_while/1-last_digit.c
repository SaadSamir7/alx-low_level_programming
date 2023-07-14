#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	printf("Last digit of %i is %i ", n, m);
	if (m > 5)
		printf("and is greater than 5\n");
	else if (m < 6 && m != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");

	return (0);
}
