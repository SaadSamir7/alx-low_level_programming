#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked_list
* @h: pointer
* Return: number of elements
**/

size_t list_len(const list_t *h)
{
	size_t e;

	e = 0;
	while (h)
	{
		h = h->next;
		e += 1;
	}

	return (e);
}
