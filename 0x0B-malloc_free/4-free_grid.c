#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_grid - create an array with the an specified number
 * @grid: grid to free
 * @height: height of grid to free
 * Return: 0 if something fails or size is 0,
 * and a pointer to the concatened string
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
