#include "main.h"

/**
 * set_bit - sets the value to 1 at given index
 * @n: pointer of an  unsigned long int
 * @index: index of the bit
 *
 * Return: 1 on Success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);


	*n = ((1ul << index) | *n);
	return (1);
}
