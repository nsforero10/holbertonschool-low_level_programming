#include <stdio.h>

/**
 *main - print the alphabet in one line
 *
 *Return: 0
*/
int main(void)
{
	char chr;

	chr = 'z';
	while (chr != 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar('\n');
	return (0);
}
