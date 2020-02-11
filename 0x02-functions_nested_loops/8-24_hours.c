#include "holberton.h"

/**
 *jack_bauer - day minures
 *
 *Return: void
 */
void jack_bauer(void)
{
	int n, m;

	n = 0;
	while (n < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
		}
		n++;
	}
}
