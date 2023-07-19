#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int char)
{
	if (char > 96 and char < 123)
		return (1);
	else
		return (0);
}
