#include "lists.h"

/**
 * print_listint_safe - print a linked list
 * @head: the head of the linked list
 * Return: the size of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *temp = NULL, *back;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		back = temp;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next, size++;
		if (temp >= back)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (size);
}
