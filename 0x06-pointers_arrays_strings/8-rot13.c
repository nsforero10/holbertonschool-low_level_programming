#include "holberton.h"

/**
 * rot13 - encode with rot13
 * @src: string to be encoded
 * Return: pointer to string encoded
 */
char *rot13(char *src)
{
	int i = 0,j;
	char dic[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dic2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (src[i])
	{
		j = 0;
		while (dic[j])
		{
			if (src[i] == dic[j])
			{
				src[i] = dic2[j];
			}
			j++;
		}
		i++;
	}
	return (src);
}
