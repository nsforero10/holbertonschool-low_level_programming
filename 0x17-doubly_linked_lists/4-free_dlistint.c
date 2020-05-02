#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head of the new linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crnt = head, *tmp = NULL;

	while (crnt)
	{
		tmp = crnt;
		crnt = crnt->next;
		free(tmp);
	}
}