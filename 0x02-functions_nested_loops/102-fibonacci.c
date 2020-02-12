#include "holberton.h"
#include <stdio.h>
/**
 *main - print times table
 *Return: #
 */
int main(void)
{
	int i, rta, pre;

	putchar('0');
	for (i = 1; i < 50 ; i++)
	{
		pre = i;
		rta += pre;
		if (i < 49)
			printf("%d, ", rta);
		else
			printf("%d\n", rta);
	}
	return (0);
}
