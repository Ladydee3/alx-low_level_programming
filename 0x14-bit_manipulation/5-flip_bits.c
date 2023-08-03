#include "main.h"

/**
 * flip_bits - calculates numnber of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: numner of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (num = 63; num >= 0; num--)
	{
	current = exclusive >> num;
	if (current & 1)
	count++;
	}
	return (count);
}
