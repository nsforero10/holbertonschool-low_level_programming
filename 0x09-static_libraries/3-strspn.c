#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: substring to search for
 * Return: the number of bytes in the initial segment of s which consist only
 * ofbytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}

		}
		if (found != 1)
			return (i);
	}
	return (0);
}
