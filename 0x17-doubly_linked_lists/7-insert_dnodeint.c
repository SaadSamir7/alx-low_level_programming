#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node at a given position.
 *@h: A pointer to a pointer to the head of the list.
 *@idx: The index where the new node should be added. Index starts at 0.
 *@n: The integer value to be stored in the new node.
 *
 *Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int cntr = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;
	while (temp != NULL && cntr < idx - 1)
	{
		temp = temp->next;
		cntr++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
