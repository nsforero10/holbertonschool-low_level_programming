#include "lists.h"

/**
 * pop_listint - detetes the first element of the linkedlist
 * @head: the head of the linked list
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = 0;

	if (!*head)
		return (0);

	num = (*head)->n;
	*head = temp->next;
	free(temp);
	return (num);
}
