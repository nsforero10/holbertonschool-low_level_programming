#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a spcified index
 * @head: the head of the linked list
 * @index: the index of the value to delete
 * Return: 1 if success, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (current)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next, i++;
	}
	return (-1);
}
