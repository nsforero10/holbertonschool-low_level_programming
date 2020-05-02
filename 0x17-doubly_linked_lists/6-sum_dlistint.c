#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head of the linked list
 * Return: the sum, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *crnt = head;

	while (crnt)
		sum += crnt->n, crnt = crnt->next;
	return (sum);
}
