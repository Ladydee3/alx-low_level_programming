#include "main.h"

/**
 * print_binary - binary numbedr equal to decimal numuber printed
 * @n: binary number to be printed
 */

void print_binary(unsigned long int n)
{
	int num, count = 0;
	unsigned long int current;

	for (num = 63; num >= 0; num--)
	{
	current = n >> num;

	if (current & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
	}
	if (!count)
	_putchar('0');
}
