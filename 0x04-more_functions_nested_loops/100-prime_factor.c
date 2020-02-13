#include "holberton.h"
/**
*isPrime - x
*@n: size of the square
*
*Return: 1 if is lowercase, 0 otherwise
*/
#include <stdio.h>

int isPrime(unsigned long n)
{
	unsigned long int i;

	for (i = 2; i != n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
*main - x
*
*Retrun: 0
*/

int main(void)
{
	unsigned long  num, i, aux;

	num = 612852475143;
	aux = num;
	for (i = 2; i < num ; i++)
	{
		while (num % i == 0)
		{
			if (isPrime(i) == 1)
			{
				aux = aux / i;
				if (aux == 1)
				{
					printf("%lu\n", i);
					return (0);
				}
			}
		}
	}
	return (0);
}
