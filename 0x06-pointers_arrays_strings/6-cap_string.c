#include "holberton.h"

/**
 * cap_string - capitalize certains letters
 * @str: string to capitilize
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	char dic[13] = " \n\t,;.!?\"(){}";
	unsigned int i, j;
	char crt;

	i = 0;
	while (str[i])
	{
		crt = str[i];
		if (i == 0 && crt >= 'a' && crt <= 'z')
		{
			crt -= 32;
		}
		else
		{
			for (j = 0; dic[j]; j++)
			{
				if (crt == dic[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1])
						str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
