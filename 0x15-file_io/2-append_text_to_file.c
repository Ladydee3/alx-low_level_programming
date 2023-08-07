#include "main.h"

/**
 * append_text_to_file - Appends text at the end of line
 * @filename: pointer to the filename
 * @text_content: string to be added at the end of file
 *
 * Return: failed function otherwise filename is NULL
 *         - -1 if no file available or - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, s, num = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (num = 0; text_content[num];)
	num++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	s = write(i, text_content, num);

	if (i == -1 || s == -1)
	return (-1);

	close(i);

	return (1);
}
