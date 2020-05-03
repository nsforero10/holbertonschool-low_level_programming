#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list.
 * @head: head of the linked list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	else if (index == 0)
	{
		free(*head);
		*head = crnt->next;
		if (crnt->next)
			crnt->next->prev = crnt->prev;
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (!crnt->next)
				return (-1);
			crnt = crnt->next, i++;
		}
		if (crnt->prev)
			crnt->prev->next = crnt->next;
		if (crnt->next)
			crnt->next->prev = crnt->prev;
		free(crnt);
		return (1);
	}
	return (-1);
}
