#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @s: array to reverse
 * @n: number of elements to swap
 * Return: nothing
 */
void reverse_array(int *s, int n)
{
	int  back, front;
	char aux;

	front = 0;
	back = n - 1;
	while (front < back && front <= n)
	{
		aux = *(s + front);
		*(s + front) = *(s + back);
		*(s + back) = aux;
		back--;
		front++;
	}

}
