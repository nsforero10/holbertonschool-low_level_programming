#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - print times table
 *@n: reference number
 *
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (n < 98)
	{
		while (i <= 98)
		{
			if (i < 98)
				printf("%i, ", i);
			else
				printf("%i\n", i);
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i > 98)
				printf("%i, ", i);
			else
				printf("%i\n", i);
			i--;
		}
	}
}
