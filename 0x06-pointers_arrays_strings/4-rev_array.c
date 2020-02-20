#include "holberton.h"

/**
 * reverse_array -
 *
 * Return: 
 */
void reverse_array(int *s, int n)
{
	int  back, front;
	char aux;

	front = 0;
	back = n - 1;
	while (front < back)
	{
		aux = *(s + front);
		*(s + front) = *(s + back);
		*(s + back) = aux;
		back--;
		front++;
	}

}
