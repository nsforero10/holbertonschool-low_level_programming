#include <stdlib.h>
#include <time.h>

/**
 *main - print the alphabet in one line
 *
 *Return: 0
*/
int main(void)
{
	char chr;

	chr = 'a';
	while (chr != 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
