#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates the first string
 * with the frist n chars of the second
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the size that want to be used on s2
 * Return: pointer to the concatened string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int cnt = 0, aux = 0, i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*s1)
		cnt++, s1++, aux++;
	s1 -= aux;
	aux = 0;
	while (*s2 && aux < n)
		cnt++, s2++, aux++;
	s2 -= aux;
	ptr = malloc(cnt * sizeof(char) + 1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (*s1)
	{
		*ptr = *s1;
		s1++, ptr++, i++;
	}
	aux = 0;
	while (*s2 && aux < n)
	{
		*ptr = *s2;
		s2++, ptr++, i++, aux++;
	}
	*ptr = '\0';
	ptr -= i;
	return (ptr);
}
