#include "holberton.h"

/**
 *print_last_digit - absolute a number
 *@n: number to get last digit
 *
 *Return: the last digit
 */
int print_last_digit(int n)
{
	int rta;

	if (n > 0)
	{
		rta = (n % 10);
	}
	else
	{
		rta = (n * -1) % 10;
	}
	_putchar(rta + '0');
	return (rta);
}
