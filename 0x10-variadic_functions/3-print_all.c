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
 * char_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void int_funct(va_list c)
{
	printf("%d", va_arg(c, int));
}

/**
 * char_funct - gets the function to printchar
 * @c: char to print                                                                      
 * Return: nothing
 */
void float_funct(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
 * char_funct - gets the function to printchar
 * @c: char to print
 * Return: nothing
 */
void string_funct(va_list c)
{
	printf("%s", va_arg(c, char *));
}
/**
 * get_funct - gets the function to use
 * @c: char to check
 * Return: a pointer to the function
 */
void (*get_funct(char c))(va_list)
{
	obj_t objs[] = {
		{'c', char_funct},
		{'i', int_funct},
		{'f', float_funct},
		{'s', string_funct},
		{'\0', NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if((objs[i].chr) == c)
			return (objs[i].f);
		i++;
	}
	return (NULL);
}
/**
 * print_all - print anythings
 * @format: the format to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	printf("Hola");
	va_start(args, format);
	while (format[i])
	{
		get_funct(format[i])(args);
		i++;
	}
	va_end(args);
	printf("\n");
}
