#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the head of the double linked list
 * @n: the value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *crnt;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		crnt  = *head;
		while (crnt->next)
			crnt = crnt->next;
		new->prev = crnt;
		crnt->next = new;
	}
	return (new);
}
