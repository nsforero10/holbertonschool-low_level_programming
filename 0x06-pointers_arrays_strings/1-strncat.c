#include "holberton.h"

/**
 * _strncat - concatenate two scripts
 * @dest: destiny
 * @src: string to concatenate
 * @n: @src size
 * Return: pointer to oncatened string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{}
	while (j < n && src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
