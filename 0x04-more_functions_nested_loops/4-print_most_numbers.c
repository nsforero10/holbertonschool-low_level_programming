#include "holberton.h"
/**
*print_most_numbers - printing numbers from 0-9  whithout 2 and 4
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar('0' + i);
	_putchar('\n');
}
