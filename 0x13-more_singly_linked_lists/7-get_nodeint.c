#include "lists.h"

/**
 * get_nodeint_at_index - gets a node located in a specified index
 * @head: the ehad of the linked list
 * @index: the index of the node to return
 * Return: the address of the node on the index,
 * null if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next, i++;
	}
	return (NULL);
}
