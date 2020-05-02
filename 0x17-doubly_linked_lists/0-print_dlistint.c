#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: the head of the double linked list
 * Return: the size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *crnt = h;
	size_t len = 0;

	while (crnt)
	{
		printf("%d\n", crnt->n);
		crnt = crnt->next, len++;
	}
	return (len);
}
