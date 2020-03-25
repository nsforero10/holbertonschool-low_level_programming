#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of linked list
 * Return: the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
