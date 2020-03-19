#include "lists.h"

/**
 * list_len - messures a linked list
 * @h: head of linked list
 * Return: the number of nodes of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
		h = h->next, size++;
	return (size);
}
