#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: a pointer
* Return: nothing
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
