#include "main.h"

/**
 * get_endianness - checks if machine  is small or big endian
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c);
}
