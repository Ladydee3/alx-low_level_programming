#include "main.h"
#include <unistd.h>

/**
 * _putchar -  character c written to stdout
 * @c: character to print
 *
 * Return: 1 0n success,
 * -1 is returned on error  and errno is appropriate set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

