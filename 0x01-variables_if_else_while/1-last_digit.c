#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints
 *
 *Return: 0
*/
int main(void)
{
	int n, lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_dgt = n % 10;
	printf("Last digit of %i is %i ", n, lst_dgt);
	if (lst_dgt > 5)
		printf("and is greater than 5\n");
	else if (lst_dgt == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
