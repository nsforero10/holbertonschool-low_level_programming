#include <stdio.h>

/**
 *main - print the alphabet in one line, skiping q and e
 *
 *Return: 0
*/
int main(void)
{
	char chr;

	chr = 'a';
	while (chr <= 'z')
	{
		if (chr != 'q' && chr != 'e')
		{
			putchar(chr);
		}
		chr++;
	}
	putchar('\n');
	return (0);
}
