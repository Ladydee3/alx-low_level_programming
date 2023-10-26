#include "main.h"

/**
 * flip_bits - number of bits to change counted
 * @n: first number
 * @m: second number
 *
 * Return: bits number to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, countbit = 0;
	unsigned long int flag;
	unsigned long int exclusive = n ^ m;

	for (num = 63; num >= 0; num--)
	{
	flag = exclusive >> num;
	if (flag & 1)
	countbit++;
	}
	return (countbit);
}
