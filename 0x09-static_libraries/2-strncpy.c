#include "holberton.h"

/**
 * _strncpy - copy a string
 * @dest: destiny
 * @src: string to copy
 * @n: size of src
 * Return: pointer to
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
