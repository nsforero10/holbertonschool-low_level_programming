#include "holberton.h"

/**
 * print_int_bin - prints a integer number as binary
 * @n: number to print
 * Return: nothing
 */
void print_int_bin(unsigned long int n)
{
	if (n == 0)
		return;

	print_int_bin(n >> 1);
	n = n & 1;
	_putchar(n + 48);
}
/**
 * print_binary - prints binary representation int
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_int_bin(n);
}
