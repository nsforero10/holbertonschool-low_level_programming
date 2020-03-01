#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the number of arguments of the program
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_coins, res, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]);
	if (res <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; res != 0; i++)
	{
		num_coins += res / coins[i];
		res = res % coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
