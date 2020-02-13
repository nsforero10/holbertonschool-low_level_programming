#include "holberton.h"
/**
*more_numbers -X
*
*Return: 1 if is lowercase, 0 otherwise
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
