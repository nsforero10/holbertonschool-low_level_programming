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
		if (num % 5)
			rta += num;
		if (num % 3)
			rta += num;
	}
	printf("%i \n", rta);
	return (0);
}
