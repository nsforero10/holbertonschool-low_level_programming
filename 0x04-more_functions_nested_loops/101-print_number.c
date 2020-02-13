#include "holberton.h"
/**
 *isPrime - x
 *@n: size of the square
 *
 *Return: 1 if is lowercase, 0 otherwise
 *Return: n
 */
#include <stdio.h>

void print_number(int n)
{
        unsigned int num = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }
        if ((num / 10) > 0)
                print_number(num / 10);
        _putchar((num % 10) + '0');
}
