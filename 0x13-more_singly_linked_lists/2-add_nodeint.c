#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of the linkedlist
 * @head: the head of the linked list
 * @n: the value of the new node
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
