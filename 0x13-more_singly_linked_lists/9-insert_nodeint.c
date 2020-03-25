#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a ew node in a specified index
 * @head: the head of the linked list
 * @idx: the index to insert the new node
 * @n: the vlue of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *current = *head;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	while (current)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next, i++;
	}
	return (NULL);
}