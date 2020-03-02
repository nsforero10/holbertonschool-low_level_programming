#include "holberton.h"

/**
 * _memcpy - copy bytes from one space of mamory to another
 *
 * @dest: destiny of the copied
 * @src: source to be copied
 * @n: number of bytes to be copied
 * Return: pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
