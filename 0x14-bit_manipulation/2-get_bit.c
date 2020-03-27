#include "holberton.h"

/**
 * get_bit - gets a bit in a specified index
 * @n: the int to search the bin
 * @index: the index to search for
 * Return: the bit in the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
