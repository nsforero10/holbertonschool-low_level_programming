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

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = crnt->next;
		if (crnt->next)
			crnt->next->prev = crnt->prev;
	}
	else
	{
		while (index > 0)
		{
			crnt = crnt->next, index--;
			if (!crnt)
				return (-1);
		}
		if (crnt->prev)
			crnt->prev->next = crnt->next;
		if (crnt->next)
			crnt->next->prev = crnt->prev;
	}
	return (1);
}
