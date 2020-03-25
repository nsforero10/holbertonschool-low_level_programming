#include "lists.h"

/**
 * free_listint2 - Frees the head
 * @head: the ehad to free
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *actual;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		actual = *head;
		*head = actual->next;
		free(actual);
	}

	*head = NULL;
}
