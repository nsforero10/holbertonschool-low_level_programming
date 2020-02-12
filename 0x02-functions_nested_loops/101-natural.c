#include "holberton.h"
#include <stdio.h>
/**
 *main - print times table
 *Return: #
 */
int main(void)
{
	int num, rta;

	for (num = 0; num < 1024 ; num++)
	{
		(num % 5) ? (rta += num) : (rta);
		(num % 3) ? (rta += num) : (rta);
	}
	printf("%i", rta);
	return (rta);
}
