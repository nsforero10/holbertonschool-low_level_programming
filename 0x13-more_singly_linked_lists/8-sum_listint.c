#include "lists.h"

/**
 * sum_listint - adds all the values of a linked list
 * @head: th head of the linked list
 * Return: the sum of the nodes->n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *crrnt = head;

	while (crrnt)
		sum += crrnt->n, crrnt = crrnt->next;
	return (sum);
}
