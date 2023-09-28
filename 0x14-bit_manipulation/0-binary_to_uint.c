#include "main.h"

/**
 * binary_to_uint - binary number converted to unsigned int
 * @b: binary number cointained in the string
 *
 * Return: number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int dec_val = 0;

	if (!b)
	return (0);

	for (num = 0; b[num]; num++)
	{
	if (b[num] < '0' || b[num] > '1')
	return (0);
	dec_val = 2 * dec_val + (b[num] - '0');
	}
	return (dec_val);
}
