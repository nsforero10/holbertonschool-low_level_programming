#include "holberton.h"

/**
 * _memset - set chars to a memmory addresses
 *
 * @s: pointer to memmory that want to be set
 * @b: the char that want to be set
 * @n: how many memmory spaces want to be set
 * Return: pointer to the first spaced at memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
