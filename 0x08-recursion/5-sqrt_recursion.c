#include "holberton.h"

/**
 * calculate - returns the natural square root of a number.
 * @x: num to check if is sqrt
 * @n: nom to search for it sqrt
 * Return: square root
 */

int calculate(int x, int n)
{
	if (x == n)
		return (-1);
	if (x * x == n)
		return (x);
	x++;
	aux(x, n);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: num to seaarch for it square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (aux(2, n));
}
