#include "lists.h"

/**
 * free_listint2 - Frees the head
 * @head: the ehad to free
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
