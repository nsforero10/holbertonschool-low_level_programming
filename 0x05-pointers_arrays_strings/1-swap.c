#include "holberton.h"

/**
 *swap_int - reset a number
 *@a: first integer to swap
 *@b: second integer to swap
 *Return: nothing
*/

void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
