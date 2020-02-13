#include "holberton.h"
/**
*print_line - printing numbers from 0-9  whithout 2 and 4
*@n: number of lines
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n ; i++)
		_putchar('_');
	_putchar('\n');
}
