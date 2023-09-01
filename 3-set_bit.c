#include "main.h"

/**
 * set_bit - value of bits set to 1
 * @n: unsigned long int pointer
 * @index: index bit
 *
 * Return: -1 if did not work , 1 if worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        unsigned int p;

        if (index > 63)
        return (-1);

        p = 1 << index;
        *n = (*n | p);

        return (1);
}

