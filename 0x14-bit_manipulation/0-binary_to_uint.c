#include "main.h"

/**
 * binary_to_uint - binary number converted to an unsigned int
 * @b: binary name contained in the string
 *
 * Return: a converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int Ladydee = 0;

	if (!b)
	return (0);
	for (num = 0; b[num]; num++)
	{
	if (b[num] < '0' || b[num] > '1')
	return (0);
	Ladydee = 2 * Ladydee + (b[num] - '0');
	}
	return (Ladydee);
}
