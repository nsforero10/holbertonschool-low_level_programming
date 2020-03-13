#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all args
 * @n: number of args
 * Return: the sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
