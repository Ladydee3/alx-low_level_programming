#include "main.h"

/**
 * get_bit -  value of a bit returned in a index in a decimal number
 * @n: number to search
 * @index: index of a bit
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
