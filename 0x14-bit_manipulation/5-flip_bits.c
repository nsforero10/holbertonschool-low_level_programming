#include "holberton.h"

/**
 * flip_bits -calculastes how many bits are needed to flip a int in another
 * @n: first int
 * @m:  second int
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = 0;
	int bchange = 0;

	nbits = n ^ m;
	while(nbits)
		bchange += nbits & 1, nbits >>= 1;
	return (bchange);
}