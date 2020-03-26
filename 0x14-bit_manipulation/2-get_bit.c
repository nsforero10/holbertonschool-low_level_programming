#include "holberton.h"

/**
 * get_bit - gets a bit in a specified index
 * @n: the int to search the bin
 * @index: the index to search for
 * Return: the bit in the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index)
	{
		n = n >> 1;
		index--;
	}
	return (n)
}