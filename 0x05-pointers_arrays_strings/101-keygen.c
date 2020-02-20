#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random passwd to crackme
 * Return: always 0
 */
int main(void)
{
	int randnum, size = 0;

	srand(time(0));
	while (size < 2772 - 127)
	{
		randnum = rand() % 127;
		if (randnum > 32)
		{
			putchar(randnum);
			size += randnum;
		}
	}
	puchar(2772 - size);
	return (0);
}
