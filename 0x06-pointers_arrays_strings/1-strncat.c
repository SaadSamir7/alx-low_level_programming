#include "main.h"

/**
 **_strncat - Custom implementation of strncat function.
 *@destination: The destination buffer to concatenate the string.
 *@source: The source string to be concatenated.
 *@num_chars: The maximum number of characters to concatenate.
 *Return: A pointer to the destination buffer.
 */
char *_strncat(char *destination, char *source, int num_chars)
{
	int dest_len = 0, src_len = 0;

	while (*(destination + dest_len) != '\0')
		dest_len++;

	while (*(source + src_len) != '\0' && dest_len < 97 && src_len < num_chars)
	{
		*(destination + dest_len) = *(source + src_len);
		dest_len++;
		src_len++;
	}

	*(destination + dest_len) = '\0';
	return destination;
}
