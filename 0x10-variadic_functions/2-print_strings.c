#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings separated b a separator
 * @separator: the char o string to separate the strings
 * @n: the number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
