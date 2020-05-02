#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linked list
 * @idx: the index to insert the new node
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *crnt = *h;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = crnt;
		new->prev = NULL;
		crnt->next->prev = new;
		*h = new;
	}
	else
	{
		while (idx > 0)
		{
			crnt = crnt->next, idx--;
			if (!crnt)
				return (NULL);
		}

		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = crnt;
		new->prev = crnt->prev;
		crnt->prev->next = new;
		crnt->prev = new;

	}
	return (new);
}
