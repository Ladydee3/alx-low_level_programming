#include "main.h"

/**
 * append_text_to_file - attaches a text at the end of the file
 * @filename: pointer to filename
 * @text_content: string to be added at the end of the file
 *
 * Return: if filename is NULL or function fails - -1
 *        if no existance of the file then user lacks write permisson - -1
 *        or else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, c, num = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (num = 0; text_content[num];)
	num++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	c = write(o, text_content, num);

	if (o == -1 || c == -1)
	return (-1);

	close(o);

	return (1);
}

