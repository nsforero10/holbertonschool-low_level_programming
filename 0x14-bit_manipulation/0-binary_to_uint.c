#include "holberton.h"

/**
 * pow_to - powers a number
 * @n: base
 * @pow: exponent
 * Return: the result
 */
unsigned int pow_to(unsigned int n, unsigned pow)
{
	unsigned int rest = 1;

	if (pow ==  0)
		return (rest);
	while (pow != 0)
	{
		rest *= n, pow--;
	}
	return rest;
}

/**
 *_strlen - retrun the length of a string
 *@pArray: the string to be mesured
 *Return: the length of the array
 */
int _strlen(const char *pArray)
{
	int  count;

	for (count = 0; pArray[count] != 0; count++)
	{}
	return (count);
}

/**
 * binary_to_uint -
 *
 * Return: 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int  n = 0, pow = 0;
	int size;

	if (!*b)
		return (0);
	size = _strlen(b) - 1;
	while (size >= 0)
	{
		if (b[size] == '1' || b[size] == '0')
			n += (b[size] - 48) * pow_to(2, pow);
		else
			return (0);
		pow++, size--;	
	}
	return (n);
}
