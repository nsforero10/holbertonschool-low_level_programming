#include "holberton.h"
/**
*print_numbers - printing numbers from 0-9
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
