#include "lists.h"

/**
 * delete_nodeint_at_index -
 *
 * Return: 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;
	unsigned int i = 0;

	while (current)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current = temp->next;
			free(temp);
			return (1);
		}
		current = current->next, i++;
	}
	return (-1);
}