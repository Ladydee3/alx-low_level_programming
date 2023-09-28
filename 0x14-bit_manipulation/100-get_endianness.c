#include "main.h"

/**
 * get_endianness - check if machine is little or big endian
 * Return: for big 0, 1 for little
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return (*c);
}

