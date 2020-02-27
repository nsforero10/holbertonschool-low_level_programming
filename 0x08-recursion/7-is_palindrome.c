#include "holberton.h"

/**
 * size - calculate the size
 * @s: sstring to messure
 * Return: size of the string
 */
int size(char *s)
{
	return ((!*s) ? (0) : (s++, (1 + size(s))));
}

/**
 * compare - calculate the size
 * @p: strig to check
 * @size: size of the string
 * Return: 1 if is palindrome 0 if not
 */

int compare(char *p, int size)
{
	if (*p != *(p + (--size)))
		return (0);
	if (size == 0 || size == 1)
		return (1);
	p++, size--;
	return (1 * compare(p, size));
}


/**
 * is_palindrome - check if a string is palindrome
 * @s: string to be checked
 * Return: 1 if is palindrome 0 if not
 */

int is_palindrome(char *s)
{
	return (compare(s, size(s)));
}
