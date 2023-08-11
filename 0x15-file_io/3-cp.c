#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 bytes for a buffer
 * @file: the file name buffer storing chars for
 *
 * Return: a pointer to new allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
fprintf(stderr, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - it closes a file description
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
int a;

a = close(fd);

if (a == -1)
{
fprintf(stderr, "Error: Can't allocate fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies content of a file from one file to another file
 * @argc: number of arguments given to the program
 * @argv: array pointer to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int from, to, r, s;
char buffer[1024];

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}

from = open(argv[1], O_RDONLY);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while ((r = read(from, buffer, 1024)) > 0)
{
s = write(to, buffer, r);
if (s != r)
{
fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
close(from);
close(to);
exit(99);
}
}

if (r == -1)
{
fprintf(stderr, "Error: Can't read from %s\n", argv[1]);
close(from);
close(to);
exit(98);
}

close(from);
close(to);

return (0);
}

