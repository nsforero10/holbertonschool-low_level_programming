#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * alloc_grid - create an array with the an specified number
 * @width: string to concatenate
 * @height: string to concatenate
 * Return: 0 if something fails or size is 0,
 * and a pointer to the concatened string
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	matrix = NULL;
	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * (sizeof(int *)));
	if (!matrix)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		*(matrix + i) = malloc(width * (sizeof(int)));
		if (!*(matrix + i))
			return (NULL);
		for (j = 0; j < width ; j++)
		{
			*(*(matrix + i) + j) = 0;
		}
	}
	return (matrix);
}
