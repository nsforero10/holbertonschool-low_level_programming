#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
 * str_concat - create an array with the an specified number
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: 0 if something fails or size is 0,
 * and a pointer to the concatened string
 */
char *str_concat(char *s1, char *s2)
{
	char *scp;
	unsigned int i;

	scp = NULL;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	scp = malloc((_strlength(s1) * sizeof(char)) +
		     (_strlength(s2) * sizeof(char)) + 1);
	if (!scp)
		return (NULL);
	i = 0;
	while (*s1)
	{
		*scp = *s1;
		s1++, scp++, i++;
	}
	while (*s2)
	{
		*scp = *s2;
		s2++, scp++, i++;
	}
	*scp = '\0';
	scp -= i;
	return (scp);
}
