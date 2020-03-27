#include "holberton.h"

/**
 * get_endianness - checks the edianness
 * Return: 1 if little, 0 if big
 */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	if (*p)
		return (1);
	return (0);
}
