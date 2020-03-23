#include "lists.h"

/**
 * reverse_listint -
 *
 * Return: 
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (next)
			*head = next;	
		else
			break;
	}
	return (*head);
}