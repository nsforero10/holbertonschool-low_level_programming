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

	rta = n % 10;
	if (rta < 0)
		rta = rta * -1;
	_putchar('0' + rta);
	return (rta);
}
