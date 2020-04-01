#include "holberton.h"
#include <stdio.h>

/**
 * main -copy a file
 * @ac: argument count
 * @av: argument array
 * Return: 0
 */
int main(int ac, char **av)
{
	char *file_from_name, *file_to_name, buff[1024];
	int file_to, file_from, readed = 1024, writed, closed;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from_name = av[1];
	file_from = open(file_from_name, O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		file_from_name), exit(98);
	file_to_name = av[2];
	file_to = open(file_to_name, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		file_to_name), exit(99);
	while (readed == 1024)
	{
		readed = read(file_from, buff, 1024);
		if (readed == -1)
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from_name),
			exit(98);
		writed = write(file_to, buff, readed);
		if (writed == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			file_to_name), exit(99);
	}
	closed = close(file_from);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
		closed), exit(100);
	closed = close(file_to);
	if (closed == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
		closed), exit(100);
	return (0);
}
