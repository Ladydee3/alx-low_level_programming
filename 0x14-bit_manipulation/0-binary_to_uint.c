#include "main.h"

/**
 * binary_to_uint - binary number converted to an unsigned int
 * @b: binary
 *
 *
 * Return: a converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int alx;
	unsigned int Ladydee3 = 0;

	if (*b)
	return (0);
	for (alx = 0; b[alx]; alx++)
	{
	if (b[alx] < '0' || b[alx] > '1')
	return (0);
	Ladydee3 = 2 * Ladydee3 + (b[alx] - '0');
	}
	return (Ladydee3);
}
