#include "main.h"

/**
 * set_bit - value of a bit set to 1 at given index
 * @n: number to set
 * @index: index set bit
 *
 * Return: if succssful 1, on error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

