#include "holberton.h"

/**
 * _strlen - messures a file
 * @p: the pointer
 * Return: the size
 */
int _strlen(char *p)
{
	int i = 0;

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

	if (!filename)
		return (-1);
	fdo = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fdo == -1)
		return (-1);
	if (text_content)
	{
		fdw = write(fdo, text_content, _strlen(text_content));
		if (fdw == -1)
			return (-1);
	}
	close(fdo);
	return (1);
}
