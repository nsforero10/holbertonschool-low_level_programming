#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * argstostr - create an array with the an specified number
 * @ac: size of av
 * @av: array of strings
 * Return: 0 if something fails or size is 0,
 * and a pointer to the concatened string
 */
char *argstostr(int ac, char **av)
{
	char *conct = NULL;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{}
		length += j + 1;
	}
	conct = malloc(length + 1);
	if (!conct)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			conct[k++] = av[i][j];
		conct[k++] = '\n';
	}
	conct[k] = '\0';
	return (conct);
}
