#include "main.h"


/**
 * print_binary - equal to a decimal that prints a binary
 * @n: number  in binary to print
 */
void print_binary(unsigned long int n)
{
	int num, count = 0;
	unsigned long int flag;

	for (num = 63; num >= 0; num--)
	{
	flag = n >> num;

	if (flag & 1)
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

