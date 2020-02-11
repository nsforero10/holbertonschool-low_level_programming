#include "holberton.h"
/**
*_isalpha - checks for a character if is lower or uppeercase
*@c: character to be checked
*
*Return: 1 if is upper or lowercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
