#include "holberton.h"

/**
 *times_table - print times table
 *
 *Return: void
 */
void times_table(void)
{
	int n, m;

	n = 0;
	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			int r = n * m;
			if (m != 0)
			{
				if (r / 10 != 0)
				{
					_putchar('0' + r / 10);
				}
				else
					_putchar(' ');
			}
			_putchar('0' + r % 10);
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
