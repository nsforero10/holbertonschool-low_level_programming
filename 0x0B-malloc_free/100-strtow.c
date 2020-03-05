#include "holberton.h"

/**
 * strtow -
 *
 * Return: 
 */
char **strtow(char *str)
{
	char **tow = NULL;
	int i, j, num_str=0,sizestr, bool=0;

	for (i = 0; *str; i++)
	{
		if( *str != ' ' && *(str-1) == ' ')
		{
			num_str++;
		}
	}
	s -= i;
	tow = malloc((char *) * num_str);
	if (!tow)
		free(tow);
	for (i = 0, j = 0; *str; i++)
	{
		sizestr = 0;
		if (bool || (*str != ' ' && *(str-1) == ' '))
		{
      
			sizestr++;
			if (
			*(tow
		}
		
	}
}
