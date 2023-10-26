#include "main.h"

/**
 * get_bit - value of a bit in an index in a decima number returned
 * @n: search number
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_Ladydee;

	if (index > 63)
	return (-2);

	bit_Ladydee = (n >> index) & 1;

	return (bit_Ladydee);
}
