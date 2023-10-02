#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *creat_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 bytes allocated for buffer
 * @file:  name of the file buffer  is storing chars for
 *
 * Return: newly- allocated buffer pointer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
		"Error: can't write to %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
 * close_file - file description closed
 * @fd: file description to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error:
		Can't close fd %d\n", fd);
	exit(100);
	
	}
}

/**
 * main - contant of a file copied from one file to onother
 * @argc: number of arguments given to the program
 * @argv: array pointer to the argument
 *
 * Return: 0 on success
 *
 * Description: on incorrect argument count  exit - code 97
 * if file_fron does not exist or cant be read -  exit code 98
 * if file_to can't be created nor written -  exit code 99
 * if file_o or from cant be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage:
		cp file_from file_to\n");
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY
			| O_TRUNC, 0664);
	do {
	if (from == -1 || r == -1)
	{
	dprintf(STDERR_FILENO, "Error:
		Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}

	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
	dprintf(STDERR_FILENO, "Error:
		can't write to %s\n", argv[2]);
	free(buffr);
	exit(99);
	}

	r = read(from, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
