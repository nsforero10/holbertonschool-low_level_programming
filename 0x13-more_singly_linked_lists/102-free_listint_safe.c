#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: the head of the linked list
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *prev;
	unsigned int size = 0;

	temp = *h;
	if (temp == NULL || h == NULL)
		return (0);

	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;

		free(prev);
		size++;
		if (temp >= prev)
			break;
	}
	*h = 0;
	return (size);
}
