#include "holberton.h"
/**
*print_triangle - printing numbers from 0-9  whithout 2 and 4
*@n: size of the square
*
*Return: 1 if is lowercase, 0 otherwise
*/
#include <stdio.h>

int isPrime(int n)
{
	int i;
	for(i = 2; i < n; i++)
	{
		if ( n % i == 0)
			return (-1);
	}
	return (1);
}

int main(void)
{
	long  num, i,rta;

	num = 612852475143;
	for (i=num-1; i >= num/2 ; i--)
	{
		if(num%i == 0 && isPrime(i) == 1)
		{
			rta = i;
			break;
		}
	}
	printf("%lu\n",rta);
	return (0);
}
