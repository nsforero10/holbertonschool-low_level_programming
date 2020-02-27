#include "holberton.h"

/**
 * srchprime - search for a prime
 * @x: num to check if is multiple
 * @n: num to check if is prime
 * Return: 0 if n is not prime, 1 if is prime
 */
int srchprime(int x, int n)
{
	if ((n % x) == 0)
		return (0);
	if (x >= (n / 2))
		return (1);
	x++;
	return (srchprime(x, n));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: the num to check if is prime
 * Return: 0 if n is not prime, 1 if is prime
 */
int is_prime_number(int n)
{
	if (n == 1 || n == 2)
		return (1);
	if (n =< 0)
		return (0);
	return (srchprime(2, n));
}
