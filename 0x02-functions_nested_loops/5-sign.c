#include "holberton.h"
/**
*print_sign - checks the sign of a number and prints it
*@n: number to be checked
*
*Return: 1 if is positive, 0 is zero, -1 if is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
