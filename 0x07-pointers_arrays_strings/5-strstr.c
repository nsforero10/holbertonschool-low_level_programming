#include "holberton.h"

/**
 * _strstr - locates a substring
 * @s: string to search in
 * @f: substring to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *s, char *f)
{
	int j;

	if (*f == '\000')
		return (s);
	for (j = 0; *s; s++)
	{

		if (*s != *f)
			f = f - j, j = 0;
		else
			j++, f++;
		if (!*f)
		{
			s = s - j + 1;
			return (s);
		}
	}
	return (0);
}
