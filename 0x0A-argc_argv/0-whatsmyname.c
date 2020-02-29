#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s", *argv);
	return (0);
}
