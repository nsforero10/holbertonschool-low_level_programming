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
		if (num % 5  == 0 || num % 3 == 0)
			rta += num;
	}
	printf("%d\n", rta);
	return (0);
}
