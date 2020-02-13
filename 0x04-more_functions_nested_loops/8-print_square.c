#include "holberton.h"
/**
*print_square - printing numbers from 0-9  whithout 2 and 4
*@n: size of the square
*
*Return: 1 if is lowercase, 0 otherwise
*/
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		puthar('\n');
}
