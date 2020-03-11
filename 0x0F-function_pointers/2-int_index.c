#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array where the integer will be searched
 * @size: the size of the array
 * @cmp: function callback to compare
 * Return: the index of the int when te callback returns 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
