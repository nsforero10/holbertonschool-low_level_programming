#include "holberton.h"
/**
*_islower - checks is a character is lowercase
*@caracter: the character that will be checked
*
*Return: 1 if is lowercase, 0 otherwise
*/
int _islower(int caracter)
{
	int resultado;

	if (caracter >= 'A' && caracter <= 'Z')
		resultado = 1;
	else
		resultado = 0;
	return (resultado);
}
