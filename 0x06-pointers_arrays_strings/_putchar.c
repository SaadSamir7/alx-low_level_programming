#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c : char to print
 *
 * return : 1
 * on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
