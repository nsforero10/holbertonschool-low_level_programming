#include "holberton.h"

/**
 * _strcmp - check for two equal strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: more tahn zero if the first is greater, less than zero if second is
 * greater, 0 if are equal
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int i, j;

	for (i = 0, j = 0; j < sizeof(s2) && i < sizeof(s1); j++, i++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}
	return (0);
}
