#include "main.h"

/**
 * create_file - it create a file
 * @filename: a pointer to the created filename
 * @text_content: pointer to the written string file
 *
 * Return: --1 if function fails or else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, num = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (num = 0; text_content[num];)
	num++;
	}

	fd = open(filename, O_CREAT | O_RDWR
	      | O_TRUNC, 0600);
	w = write(fd, text_content, num);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}




