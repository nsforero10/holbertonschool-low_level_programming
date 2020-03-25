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
	listint_t *newNode, *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	if (!*head && idx > 0)
		return (free(newNode), NULL);
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next, i++;
	}
	return (NULL);
}
