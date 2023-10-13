#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 *@head: A pointer to the head of the list.
 *@index: The index of the node, starting from 0.
 *
 *Return: The address of the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cntr = 0;

	while (head != NULL)
	{
		if (cntr == index)
			return (head);
		head = head->next;
		cntr++;
	}

	return (NULL);
}
