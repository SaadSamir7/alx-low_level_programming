#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: linked_list
* Return: a structure to a linked_list
**/

size_t print_list(const list_t *h)
{
	int len;

	len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}

	return (len);
}
