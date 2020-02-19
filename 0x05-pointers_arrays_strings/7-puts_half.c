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
 *puts_half - retrun the length of a string
 *@str: the string to be printed
*/

void puts_half(char *str)
{
	int  count, length;

	length = _strlen(str);
	count = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);
	while (str[count] != 0)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
