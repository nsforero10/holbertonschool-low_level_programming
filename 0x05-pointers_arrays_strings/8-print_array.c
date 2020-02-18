#include "holberton.h"
#include <stdio.h>

/**
 *print_array - retrun the length of a string
 *@a: the array to be tested
 *@n: the number of elemts to be printed
 *Return: the length of the array
*/

void print_array(int *a, int n)
{
	int  i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
