#include "holberton.h"

/**
 * factorial - calculates the facotrial of a number
 * @n: number to calculate the factorial
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
