#include "lists.h"

/**
 * dlistint_len - messures a linked list
 * @h: the head of the linked list
 * Return: the size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *crnt = h;
	size_t len = 0;

	while (crnt)
	{
		crnt = crnt->next, len++;
	}
	return (len);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linked list
 * @idx: the index to insert the new node
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *crnt = *h;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (!*h)
			new->next = NULL, new->prev = NULL, *h = new;
		else
		{
			new->prev = NULL;
			new->next = *h;
			(*h)->prev = new;
			*h = new;
		}
	}
	else if (idx == dlistint_len(*h))
	{
		while (crnt->next)
			crnt = crnt->next;
		new->next = NULL;
		crnt->next = new;
		new->prev = crnt;
	}
	else
	{
		while (i < idx)
		{
			if (!crnt->next)
				return (NULL);
			crnt = crnt->next, i++;
		}
		new->next = crnt;
		new->prev = crnt->prev;
		crnt->prev->next = new;
		crnt->prev = new;
	}
	return (new);
}
