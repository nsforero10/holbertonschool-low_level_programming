#include "holberton.h"

/**
 * _strlen - messures a file
 * @p: the pointer
 * Return: the size
 */
size_t _strlen(char *p)
{
	size_t i = 0;

	while (*p)
		i++, p++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: the file name
 * @text_content: the file content
 * Return: the size
 */
int create_file(const char *filename, char *text_content)
{
	int fdo, fdw;

	if (!filename || !text_content)
		return (-1);
	fdo = open(filename, O_CREAT | O_RDWR, 0600);
	if (fdo == -1)
		return (-1);
	fdw = write(fdo, text_content, _strlen(text_content));
	if (fdw == -1)
		return (-1);
	return (1);
}
