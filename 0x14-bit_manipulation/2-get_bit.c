#include "main.h"

/**
 * get_bit - value of a bit in an index in a decima number returned
 * @n: search number
 * @index: bit index
 *
 * Return: bit value , or -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int Ladydee, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	Ladydee = 1 << index;
	check = n & Ladydee;
	if (check == Ladydee)
	return (1);
	return (0);
}
