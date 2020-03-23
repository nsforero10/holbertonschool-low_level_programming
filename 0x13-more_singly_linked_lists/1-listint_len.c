#include "lists.h"

/**
 * listint_len - messures a linked list
 * @h: the head of the linked list
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
		h = h->next, size++;
	return (size);
}
