#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * char_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void char_funct(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * int_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void int_funct(va_list c)
{
	printf("%d", va_arg(c, int));
}

/**
 * float_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void float_funct(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
 * string_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void string_funct(va_list c)
{
	printf("%s", va_arg(c, char *));
}

/**
 * print_all - print anythings
 * @format: the format to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *comma = "";
	obj_t objs[] = {
		{'c', char_funct},
		{'i', int_funct},
		{'f', float_funct},
		{'s', string_funct},
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (objs[j].chr)
		{
			if (objs[j].chr == format[i])
				printf("%s", comma), objs[j].f(args), comma = ", ";
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
