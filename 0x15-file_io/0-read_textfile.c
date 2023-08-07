#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the print text file to stdout
 * @filename: the read text file
 * @letters: number of read letters
 * Return: s - number of byte read and printed
 *         0 if function fails  or if the filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	s = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (s);
}

