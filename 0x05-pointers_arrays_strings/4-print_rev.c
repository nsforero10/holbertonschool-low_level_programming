#include "holberton.h"

/**
 *_strlen - retrun the length of a string
 *@pArray: the string to be mesured
 *Return: the length of the array
 */

int _strlen(char *pArray)
{
	int  count;

	for (count = 0; pArray[count] != 0; count++)
	{}
	return (count);
}



/**
 *print_rev - retrun the length of a string
 *@str: the string to be printed
*/

void print_rev(char *str)
{
	int  count;

	count = _strlen(str);
	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
	_putchar('\n');
}
