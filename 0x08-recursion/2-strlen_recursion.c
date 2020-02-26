#include "holberton.h"

/**
 * _strlen_recursion - calculate lenght of a string
 * @s: string to be messured
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
