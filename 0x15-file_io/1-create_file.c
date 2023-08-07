#include "main.h"

/**
 * create_file - file creator
 * @filename: pointer to the name for the file to be created
 * @text_content: A pointer to the file wrirren by a string
 *
 * Return: failed function - -1
 *         or else - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, s, num = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (num = 0; text_content[num];)
	num++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	s = write(fd, text_content, num);

	if (fd == -1 || s == -1)
	return (-1);

	close(fd);
	return (1);
}
