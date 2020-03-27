#include "holberton.h"

/**
 * set_bit - sets a bit ina specific index
 * @n: pointer to the int to set the value
 * @index: the index to insert the one
 * Return: 1 if success, -1 y fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
