#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add a node to the beginning of a linked list
* @head: a pointer
* @str: string
* Return: linked list
**/

list_t *add_node(list_t **head, const char *str)
{
	char *cp;
	list_t *rl;
	int i;

	rl = malloc(sizeof(list_t));
	if (rl == NULL)
		return (NULL);
	cp = strdup(str);
	for (i = 0; str[i] != '\0';)
		i += 1;

	rl->str = cp;
	rl->next = *head;
	rl->len = i;
	*head = rl;
	return (*head);
}
