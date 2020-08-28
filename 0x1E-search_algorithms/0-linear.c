#include "search_algos.h"

/**
 * linear_search - searches for valuue in an array of integers
 * using linear search algorith
 * @array: array of integers
 * @size: the length of the array
 * @value: the falue to search for
 * Return: index of the first occurrency of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

