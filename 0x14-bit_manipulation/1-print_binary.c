#include "holberton.h"

/**
 * print_binary - print binary representation of a int
 * @n: the integer top prpint
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		while (n != 0)
		{
			_putchar((n & 1) ? '1' : '0');
			n = n >> 1;
		}
	}
}
