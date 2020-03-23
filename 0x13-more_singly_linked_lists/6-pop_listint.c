#include "lists.h"

/**
 * pop_listint -
 *
 * Return: 
 */
int pop_listint(listint_t **head)
{
	int temp = 0;

	temp = (*head)->n;
	*head = (*head)->next;
	return (temp);
}