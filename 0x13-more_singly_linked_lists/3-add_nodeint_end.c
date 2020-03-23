#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: the head of the linked list
 * @n: the value of the new node
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *last = NULL;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
