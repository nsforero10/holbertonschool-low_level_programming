#include "holberton.h"

/**
 *main - go through a array and print it
 *Return: 0
*/
int main(void)
{
	char *str;
	unsigned int i;

	str = "Holberton\n";
	for (i = 0; i <= (sizeof(str) + 1); i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
