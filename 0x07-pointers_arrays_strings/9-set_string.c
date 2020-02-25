#include "holberton.h"

/**
 * set_string -  sets the value of a pointer to a char.
 * @s:  pointer to pointer;
 * @to: pointet to char;
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
