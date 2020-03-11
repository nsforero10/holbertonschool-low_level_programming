#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations.
 * @ac: the argumment count
 * @av: the argumment list
 * Return: the result of the operation
 */

int main(int ac, char *av[])
{
	int num1 = 0, num2 = 0;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((av[2][0]) != '*' &&
	(av[2][0]) != '/' &&
	(av[2][0]) != '+' &&
	(av[2][0]) != '-' &&
	(av[2][0]) != '%' && av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if (num2 == 0 &&
	(av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(av[2])(num1, num2)));

	return (0);
}
