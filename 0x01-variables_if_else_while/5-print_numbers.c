#include <stdio.h>
/**
 *main - print the alphabet in one line
 *
 *Return: 0
*/
int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
