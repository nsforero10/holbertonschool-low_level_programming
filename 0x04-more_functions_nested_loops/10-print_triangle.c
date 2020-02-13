#include "holberton.h"
/**
*print_triangle - printing numbers from 0-9  whithout 2 and 4
*@n: size of the square
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				(j >= (n - 1) - i) ?
					(_putchar('#')) : (_putchar(' '));
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
