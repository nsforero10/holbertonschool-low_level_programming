#include "holberton.h"

/**
 * _puts_recursion - print a string
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s++);
}