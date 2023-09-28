 #include "main.h"

/**
 * clear_bit - value of given bit set to 0
 * @n: pointer number to change
 * @index: index of bit to clear
 *
 * Return: 1 on success,  -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
