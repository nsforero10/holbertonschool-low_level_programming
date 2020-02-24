#include "holberton.h"

/**
 * _strchr - locates a cahr in a string
 *
 * @s: pointer to string to search in
 * @c: char to search for
 * Return: pointer to the char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
