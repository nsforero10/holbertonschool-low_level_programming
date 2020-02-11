#include "holberton.h"

/**
 * _abs - absolute a number
 *@n: the number to be absed
 *
 *Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
