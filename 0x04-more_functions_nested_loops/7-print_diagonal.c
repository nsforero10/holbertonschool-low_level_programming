#include "holberton.h"
/**
*print_diagonal - printing numbers from 0-9  whithout 2 and 4
*@n: number of diagonals
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
			   _putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
