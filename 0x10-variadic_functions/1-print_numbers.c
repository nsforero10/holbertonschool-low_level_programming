#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -print numbers s
 * @separator: separator to be between
 * @n: the number of args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
