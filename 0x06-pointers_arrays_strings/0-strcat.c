#include "holberton.h"

/**
 *_strcat - concatenates 2 strings.
 *@dest: string with concatenation
 *@src: string to be concatenated
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int ld, ls;

	ld = 0;
	lengthS = 0;

	while (*(dest + ld) != '\0')
		ld++;

	while (*(src + ls) != '\0' && ld < 97)
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}

	*(dest + ld) = '\0';
	return (dest);
}
