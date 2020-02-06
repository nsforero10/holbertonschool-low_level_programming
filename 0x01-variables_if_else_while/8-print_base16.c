#include <stdio.h>

/**
 *main - print the alphabet in one line
 *
 *Return: 0
*/
int main(void)
{
	char hex;

	hex = '0';
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}
	hex = 'a';
	while (hex != 'g')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
