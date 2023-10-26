#include "main.h"

/**
 * get_endianness - endianness checked
 *
 * Return: big endian 0, little endian 1
 */
int get_endianness(void)
{
	int num;
	char *p;

	num = 1;
	p = (char *)&num;
	return (*p);
}
