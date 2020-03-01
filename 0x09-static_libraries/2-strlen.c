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
