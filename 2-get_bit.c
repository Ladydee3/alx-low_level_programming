#include "main.h"

/**
 * get_bit - returns the value of a bit given index
 * @n: unsigned long int
 * @index: bit index
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num;

if (n == 0 && index < 64)
return (0);

for (num = 0 ; num <= 63; n >>= 1, num++)
{
if (index == num)
{
return (n & 1);
}
}
return (-1);
}
