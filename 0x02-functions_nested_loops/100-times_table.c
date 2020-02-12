#include "holberton.h"

/**
 *print_times_table - print times table
 *@c: param
 *Return: void
 */
void print_times_table(int c)
{
	int n, m;

	if (c <= 15 && c >= 0)
	{
		n = 0;
		while (n <= c)
		{
			m = 0;
			while (m <= c)
			{
				int r = n * m;

				if (m != 0)
				{
					(r / 100) == 0 ?
						_putchar(' ') :
						_putchar('0' + r / 100);
					(r / 10) == 0 ?
						_putchar(' ') :
						_putchar('0' + ((r / 10) % 10));
					_putchar('0' + r % 10);
				}
				else
					_putchar('0');
				if (m  != c)
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
}
