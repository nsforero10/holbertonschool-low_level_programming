#include "holberton.h"

/**
 * leet - encodes into 1337
 * @src: string to be encoded
 * Return: a pointer to the encoded
 */
char *leet(char *src)
{
	unsigned int i, j;
	char dic[10] = "AaEeOoTtLl";
	char nums[5] = "43071";

	i = 0;
	while (src[i])
	{
		j = 0;
		while (dic[j])
		{
			if (src[i] == dic[j] || src[i] == dic[j + 1])
			{
				src[i] = nums[j / 2];
				break;
			}
			j += 2;
		}
		i++;
	}
	return (src);
}
