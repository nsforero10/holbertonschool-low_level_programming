#include "holberton.h"

/**
 *puts2 - retrun the length of a string
 *@str: the string to be printed
 *Return: the length of the array
 */

void puts2(char *str)
{
	int  count;

	count = 0;
	while (str[count] != 0)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
