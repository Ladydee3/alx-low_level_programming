#include "main.h"

/**
 * create_file -file created
 * @text_content: content written in te file
 * @filename: filename
 *
 * Return: -1 if fails , 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int aletters;
	int rwr;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content)
	text_content = "";

	for (aletters = 0; text_content[aletters]; aletters++)

	rwr = write(fd, text_content, aletters);

	if (rwr == -1)
	return (-1);

	close(fd);

	return (1);
}
