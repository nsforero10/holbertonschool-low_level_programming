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
 *rev_string - reverse a string
 *@s: the string to be printed
 */

void rev_string(char *s)
{
	int  back, front, len;
	char aux;

	front = 0;
	len = _strlen(s);
	back = len - 1;
	while (back >= len / 2)
	{
		aux = *(s + front);
		*(s + front) = *(s + back);
		*(s + back) = aux;
		back--;
		front++;
	}
}
