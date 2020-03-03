#include "holberton.h"
#include <stdlib.h>

/**
 *_strlength - calulate the length of a string
 *@p: string to messure
 *Return: length of the string
 */
unsigned int _strlength(char *p)
{
	return ((!*p) ? (0) : (1 + (_strlength(++p))));
}

/**
 * _strdup - create an array with the an specified number
 * @str: string to copy
 * Return: 0 if something fails or size is 0, and a pointer to the copy
 */
char *_strdup(char *str)
{
	char *scp;
	unsigned int size, i;

	if (*str == NULL)
		return (NULL);
	size = _strlength(str);
	scp = malloc(size * sizeof(char));
	if (!scp)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		scp[i] = str[i];
		i++;
	}
	return (scp);
}
