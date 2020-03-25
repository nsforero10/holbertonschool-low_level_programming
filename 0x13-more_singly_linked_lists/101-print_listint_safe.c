#include "lists.h"

/**
 * print_listint_safe -
 *
 * Return: 
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *temp = NULL;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next, size++;
	}
	return (size);
}