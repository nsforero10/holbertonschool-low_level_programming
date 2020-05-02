#include "lists.h"

/**
 * dlistint_len - messures a linked list
 * @h: the head of the linked list
 * Return: the size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *crnt = h;
	size_t len = 0;

	while (crnt)
	{
		crnt = crnt->next, len++;
	}
	return (len);
}
