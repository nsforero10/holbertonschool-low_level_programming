#include "holberton.h"

/**
 *_puts - retrun the length of a string
 *@str: the string to be printed
 */

void _puts(char *str)
{
	int  count;

	count = 0;
	while (str[count] != 0)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
