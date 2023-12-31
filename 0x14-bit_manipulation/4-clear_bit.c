#include "main.h"
#include <stdlib.h>


/**
 * clear_bit - value of bit to 0 set at given index
 * @index: index
 * @n: parameter
 * Return: -1 if error, 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
