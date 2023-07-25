#include "main.h"

/**
 *_strcpy -> copies the string pointed to by src
 *@str1: This is original
 *@str2: This is the copy
 *
 *Return: This return copy
 */
char *_strcpy(char *str1, char *str2)
{
	char *st = str1;

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';
	return (st);
}
