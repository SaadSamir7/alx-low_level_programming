#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes the node at a given index.
 *@head: A pointer to a pointer to the head of the list.
 *@index: The index of the node that should be deleted. Index starts at 0.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int cntr = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && cntr < index)
	{
		temp = current;
		current = current->next;
		cntr++;
	}

	if (current == NULL)
		return (-1);

	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);
	return (1);
}
