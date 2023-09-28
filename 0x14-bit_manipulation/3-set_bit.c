#include "main.h"

/**
 * set_bit - bit at the given index to 1 set
 * @n: pointer num  to change
 * @index: bit of index set to 1
 *
 * Return: on success 1, on failure -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1ul << index) | *n);
	return (1);
}
