#include "holberton.h"
#include <stdio.h>
/**
*main - x
*
*Return: 1 if is lowercase, 0 otherwise
*/
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		(i % 3 == 0) ?
			((i % 5 == 0) ? printf("FizzBuzz ") : printf("Fizz ")) :
			((i % 5 == 0) ? printf("Buzz ") : printf("%i ", i));
	}
	printf("\n");
	return (0);
}
