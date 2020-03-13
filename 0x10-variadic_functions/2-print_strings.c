#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -
 *
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && *separator)
			printf("%s%s", va_arg(args, char *), separator);
		else
			printf("%s", va_arg(args, char *));
	}
	va_end(args);
	printf("\n");
}
