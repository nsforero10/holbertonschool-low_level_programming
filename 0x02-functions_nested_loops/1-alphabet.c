#include "holberton.h"
/**
 *print_alphabet - prints the alphabet
 *Return: void
*/

void print_alphabet(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}
	_putchar('\n');
}
