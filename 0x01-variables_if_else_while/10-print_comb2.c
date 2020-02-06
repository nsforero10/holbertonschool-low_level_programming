#include <stdio.h>
/**
 *main - print the alphabet in one line
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
			putchar(i);
			putchar(j);
			if (i != '9' || j != '9')
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
