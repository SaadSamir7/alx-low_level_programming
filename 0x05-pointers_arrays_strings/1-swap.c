#include "main.h"

/**
 * swap_int ; swap the value of two integers
 *
 * @a : integer value
 * @b : integer value
 *
 * return : no thing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
