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
 * append_text_to_file -
 *
 * Return: 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		fdw = write(fd, text_content, _strlen(text_content));
		if (fdw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}