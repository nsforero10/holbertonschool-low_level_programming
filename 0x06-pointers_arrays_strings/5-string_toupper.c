#include "holberton.h"

/**
 * string_toupper - uppercase lowercase chars
 *
 *@str: string to uppercase
 * Return: pointer to the char
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
