#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - a new node on the top of the
 * @head: the head of the linked list
 * @str: the string for the new node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr = strdup(str);
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;

	while (*str)
		i++, str++;
	if (!new)
		return (NULL);
	(*new).str = ptr;
	(*new).len = i;
	(*new).next = *head;
	*head = new;
	return (new);
}
