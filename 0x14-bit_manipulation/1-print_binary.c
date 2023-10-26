#include "main.h"

/**
 * _power - calculate ( ase and power
 * @base: exponet base
 * @pow: exponet power
 * Return: power and base value
 */
unsigned int _power(unsigned int base, unsigned int pow)
{
	unsigned int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
	num *= base;
	return (num);
}

/**
 * print_binary - equal to a decimal that prints a binary
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) *  8 - 1);

	while (dev != 0)
	{
	result = n & dev;
	if (result == dev)
	{
	flag = 1;
	_putchar('1');

	}
	else if (flag == 1 || dev == 1)
	{
	_putchar('0');
	}
	dev >>= 1;
	}
}

