#include "holberton.h"

/**
 * array_range - allocs on mem from min to max
 * @min: min int
 * @max: max int
 * Return: return pointer to min
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i <= (max - min))
	{
		ptr[i] = (min + i);
		i++;
	}
	return (ptr);
}
