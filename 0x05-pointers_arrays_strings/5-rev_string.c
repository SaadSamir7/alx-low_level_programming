#include "main.h"

/**
 * rev_string - Reverses a string
 * @str: Pointer to the string
 *
 * Return: void
 **/
void rev_string(char *str)
{
	int len = 0;
	int start;
	char temp;
	char temp2;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;

	for (start = 0; start < len; start++)
	{
		temp = str[start];
		temp2 = str[len];
		str[start] = temp2;
		str[len] = temp;
		len--;
	}
}
