#include <stdio.h>

/**
 *main - print the numbers from 00 - 99
 *
 *Return: 0
*/
int main(void)
{
	int i, j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
