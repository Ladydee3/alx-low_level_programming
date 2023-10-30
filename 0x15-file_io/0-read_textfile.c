#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - texfile that read n print letters
 * @letters: number of printed letters
 * @filename: filename
 *
 * Return: number of letters printe, if fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t one, two;
	char *buf;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!fd)
	return (0);

	one = read(fd, buf, letters);
	two = write(STDOUT_FILENO, buf, one);

	close(fd);

	free(buf);

	return (two);
}
