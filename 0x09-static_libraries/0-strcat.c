#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: concatened string destiny
 * @src: string to concatenate with @dest
 * Return: pointer to the pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, size;

	j = 0;
	size = sizeof(src);
	for (i = 0; dest[i] != '\0'; i++)
	{}
	while (j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
