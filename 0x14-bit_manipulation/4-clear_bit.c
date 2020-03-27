#include "holberton.h"

/**
 * clear_bit - clears a bit in a int
 * @n: pointer to the int to clear
 * @index: index to clear
 * Return: 1 if success, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
