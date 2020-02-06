#include <stdlib.h>
#include <time.h>

/**
 *main - print the alphabet two times in  one line,
 *once on lowercase, once on uppercase
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
	chr = 'A';
	while (chr != 'Z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
