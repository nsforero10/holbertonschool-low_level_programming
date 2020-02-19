#include "holberton.h"

/**
 *_strlen - retrun the length of a string
 *@pArray: the string to be mesured
 *Return: the length of the array
 */

int _strlen(char *pArray)
{
	int count;

	for (count = 0; pArray[count] != 0; count++)
	{}
	return (count);
}


/**
 *_strcpy - retrun the length of a string
 *@dest: the destiny
 *@src: the string to be copied
 *Return: the char array copied
 */

char *_strcpy(char *dest, char *src)
{
	int  count, length;

	count = 0;
	length = _strlen(src);
	while (count <= length)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
