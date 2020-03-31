#include "holberton.h"

/**
 * read_textfile - reads a file and print it
 * @filename: the file name
 * @letters: the numer of letters
 * Return: the number of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t size = 0, size2;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (!buff)
		return (0);
	size = read(fd, buff, letters);
	close(fd);
	if (size == -1)
		return (0);
	size2 = write(STDOUT_FILENO, buff, size);
	if (size2 == -1)
		return (0);
	return (size2);
}
