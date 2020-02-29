#include <stdio.h>

/**
 * main - prints the number of arguments of the program
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
